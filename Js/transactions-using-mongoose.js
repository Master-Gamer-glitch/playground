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
