
var input = require("fs").readFileSync("stdin","utf8");

var valores = input.split("\n");

var raio = parseFloat(valores.shift());
var pi = 3.14159;
var area = ((raio**2)*pi).toFixed(4);

console.log(`A=${ area }`);