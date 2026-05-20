//Learnt about transactions
const mongoose = require("mongoose");

const session = await mongoose.startSession();
session.startTransaction();

try {
  await User.updateOne({ name: 'Alice' }, { $inc: { balance: -10 } }, { session });
  await User.updateOne({ name: 'Bob' }, { $inc: { balance: 10 } }, { session });
  await session.commitTransaction();

} catch (error) {
  await session.rollbackTransaction();
  await session.abortTransaction(); // atomicity;
  
} finally {
  session.endSession(); //release resources;
  
}

// NO SAVEPOINT FACILITY WITH MONGOOSE... HENCE ALTERNATIVE: "POOL" [NOT GONNA FAFO HERE];
// MYSQL EQUIVALENT: 

CREATE TABLE Accounts (
  acc_id int primary key,
  holder_name varchar(20),
  balance float
);

insert into Accounts VALUES (1, "Rahul", 5000);
insert into Accounts VALUES (2, "Priya", 7000);
insert into Accounts VALUES (3, "Amoan", 9000);

select * from Accounts;

start transaction;
update Accounts set balance= balance-1000 where acc_id=1;
savepoint sp1;

update Accounts set balance= balance+1000 where acc_id=2;
savepoint sp2;

rollback; -- Transaction hua and reverse hogya; [till last commit or pura]: ATOMICITY;
rollback to savepoint sp2;

-- commit ke upar nahi jaa skte. EK BAAR COMMIT KRDIA: MATLAB SAID, DONE, SEALED;

-- end transaction; // DNE

select * from Accounts;
