// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Strict_mode
// https://www.coursera.org/learn/javascript-basics/lecture/thJcX/strategy-2-use-strict

// strict mode convert javascript silent error to throw error
// in strict mode, if you forget to use "var" or "let" means the type of the variable
// in times of declearation of a variable, this will throw error immediatly.


"use strict";

var x = 10;
var y = 20;
console.log(x + y);