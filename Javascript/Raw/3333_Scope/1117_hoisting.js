// https://www.youtube.com/watch?v=pT9xqCS8Vwk&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=5
// https://www.digitalocean.com/community/tutorials/understanding-hoisting-in-javascript


// Hoisting is (to many developers) an unknown or overlooked behavior of JavaScript.
// If a developer doesn't understand hoisting, programs may contain bugs (errors).
// To avoid bugs, always declare all variables at the beginning of every scope.
// Since this is how JavaScript interprets the code, it is always a good rule.

// JavaScript only hoists declarations, not initializations.

// decleration hoisting
x = 5;
console.log(x);
var x;

// initialization hoisting
var y;
console.log(y);
y = 5;
