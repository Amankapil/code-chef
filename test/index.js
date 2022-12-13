const http = require('http')
const {mongodbClint} = require('mongodb')
const express = require('express')
const path = require('path')

const app = express();
const dbname = 'my-project';

const url = 'mongodb://localhost:27017';
const client = new mongodbClint(url);


async function database(){
    await client.connect();
    console.log('Database connection established')
    const db = client.db(dbname);
    const collection = db.collection('document')
    return done;



}
database()



const publichpath = path.join(__dirname , 'public');

app.use(express.static(publichpath));
app.get((req ,res) => {
    res.write("hii threr")
})

app.listen(4000)


// const Data = require('./data');
// const port = 4000
// http.createServer((req,res )=>{
//     res.writeHead(201,{'content-type' : 'application/json'})
//     res.write(JSON.stringify(Data))
//     res.end()

// }).listen(port);
// console.log("server start on ", {port})
