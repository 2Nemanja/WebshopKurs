const express = require("express");

const router = require("../routes/api");
const parser = require("body-parser");
const logger = require("morgan");//informacija za logove
const app = express();
app.use(logger("dev"));

app.use("/", router); //adresa svih ssledecijh fajlova pocinjace sa /

app.use(parser.urlencoded({ extended: true})); //extended = true for other types
app.use(parser.json()); //parer sluzi da parsira zahteve koji dolaze u json formatu da bi mogli da im pristupamo


console.log("RADIIII");
module.exports = app;