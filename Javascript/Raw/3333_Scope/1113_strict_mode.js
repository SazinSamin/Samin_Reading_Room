// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Strict_mode
// https://www.coursera.org/learn/javascript-basics/lecture/thJcX/strategy-2-use-strict

// strict mode convert javascript silent error to throw error
// in strict mode, if you forget to use "var" or "let" means the type of the variable
// in times of declearation of a variable, this will throw error immediately.


// The "use strict" directive is only recognized at the beginning of a script or a function.



"use strict";

var x = 10;
var y = 20;
console.log(x + y);

// this below code will generate error, because we didn't declear the variable yet.
// x = 5;
// console.log(x); 
