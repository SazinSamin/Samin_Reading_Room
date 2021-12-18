// First class functions are functions that are treated like an object(or are assignable to a variable).
// diffrence between first class function & higher order funciton
// https://stackoverflow.com/questions/10141124/any-difference-between-first-class-function-and-high-order-function

// First Class functions can:
//              Be stored in variables
//              Be returned from a function.
//              Be passed as arguments into another function.

let plus = function  getSum(a, b){
        return a + b;
}

console.log(plus(100, 200));
