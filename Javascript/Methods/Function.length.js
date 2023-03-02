// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Function/length

function x(a, b) {}
function y(a, b, c) {}
function z() {}
function f(...rest) {}
function g(a, b = 1, c) {}

console.log(x.length); // 2
console.log(y.length); // 3
console.log(z.length); // 0
console.log(f.length); // 0, rest parameter is not counter.
console.log(g.length); // only the parameter before the first default value parameter is counted.
