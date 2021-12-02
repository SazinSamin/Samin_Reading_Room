function myFunction(a, b) {
        return a * b;
}

let a = 10;
let b = 20;
let result = myFunction(10, 15);
console.log(result);

// we can also put a js function in a variable.
// A function without "()" will return function object instead of function result
// we use that variable which hold that function object and use like that function.
let x = myFunction;
console.log(x(10, 20));

