// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/instanceof

const arr = [1, 2, 3];
console.log(arr instanceof Array);


// from MDN
let literalString = 'This is a literal string';
let stringObject  = new String('String created with constructor');

literalString instanceof String;  // false, string primitive is not a String
stringObject  instanceof String;  // true

literalString instanceof Object;  // false, string primitive is not an Object
stringObject  instanceof Object;  // true

stringObject  instanceof Date;    // false


// I found same rule as string in case of Number literal & primitive
const num1 = 12.3;
console.log(num1 instanceof Number) // false
const num2 = new Number(12.3);
console.log(num2 instanceof Number); // true
