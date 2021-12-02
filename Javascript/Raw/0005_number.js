// https://www.w3schools.com/js/js_numbers.asp


let x = 0.2;
let y = 0.1;

let result = (x *10 + y * 10) / 10;
console.log(result);



// JavaScript will try to convert strings to numbers in all numeric operations:
let a = "10";
let b = "10";
console.log(a - b);
console.log(a * b);
console.log(a / b);
// but in case of "+" it doesn't work, it will do string concatanation operation
console.log(a + b);

console.log(Number.MAX_VALUE);
