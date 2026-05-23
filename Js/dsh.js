const express = require("express");
// npm i express
// npm i nodemon
// npm i mongoose
// frontend => data chahiye => calls my api => express
const app = express();
const userSchema = require("./users");
const mongoose = require("mongoose");

// call back fn!!!!!!!!!! aisa fn jo tab call ho in a given condition...

//middleware: converts incoming data into json
app.use(express.json()); 

app.get("/", function(request, response){
    // db data variable 
    response.status(404);
    return response.send({message: "Hey Guyz!"}); //response body 
    // "json.stringify"
});

users = ["sachin", "Dhruv", "Shaash", "hasini"] // database se aayegi

app.get("/userdata", (req,dhruv) => {
    dhruv.send(users);
})

app.post("/newUser", (req,res)=>{
    // schema {name, age, email, password}
    users = req.body;
    res.send("data gaya");
    render();
})

function render(){
    console.log(users);
    console.log(typeof users);
}

app.listen(8080, () => console.log("Hi backend!"));

mongoose.connect("super-secret-string-here")
.then(console.log("database connected"))
.catch(function(err){
    console.log("ERROR in db connection " + err.message);
}); // callback fn.........

// restaurant => "menu" all list of apis available
// waiter => kitchen to u... waiter that api transfer [api call]
// kitchen => backend
// api/http request type: get, post, put and delete: CRUD opertion, create, read, update and delete...
// get post put delete
