// https://www.digitalocean.com/community/tutorials/understanding-hoisting-in-javascript


// JavaScript only hoists declarations, not initializations.

// decleration hoisting
x = 5;
console.log(x);
var x;

// initialization hoisting
var y;
console.log(y);
y = 5;
