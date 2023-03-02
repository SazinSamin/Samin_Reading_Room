// First class functions are functions that are treated like an object(or are assignable to a variable).
// https://developer.mozilla.org/en-US/docs/Glossary/First-class_Function
// difference between first class function & higher order function
// https://stackoverflow.com/questions/10141124/any-difference-between-first-class-function-and-high-order-function

// First Class functions can:
//              Be stored in variables
//              Be returned from a function.
//              Be passed as arguments into another function.


let plus = function  getSum(a, b){
        return a + b;
}

console.log(plus(100, 200));


// everything is in js is an object, function also a object, but it is special type of object.
function foo () {
        console.log('I am function');
}

// here you can see that as function is a object so we add property to that object like in normal object we do
foo.name = 'function name is foo';
console.log(foo.name); 
