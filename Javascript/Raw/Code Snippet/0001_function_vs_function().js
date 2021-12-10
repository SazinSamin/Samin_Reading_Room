function myFunction(a, b){
        return a + b;
}

// with "()" return function value;
let x = myFunction(12, 10);
console.log(x);

// without "()" will return the function itself.
let y = myFunction;
let z = y(20, 30);
console.log(z);
