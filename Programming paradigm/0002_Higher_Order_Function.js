// https://medium.com/javascript-scene/higher-order-functions-composing-software-5365cf2cbe99
// diffrence between first class function and higher order funciton
// https://stackoverflow.com/questions/10141124/any-difference-between-first-class-function-and-high-order-function


// Higher Order Function
// Higher order functions are functions that take at least one first class function as a parameter, 
// or return at least one first class function.
// So the presence of first - class functions (as a language feature)
//  implies the presence of higher - order functions.

function askUserName() {
        return prompt("What is your name");
}

// here we receive function as argument
const foo = function (name) {
        // we can also return a function 
        return function () {
                console.log(`Assalamu Alaikum ${name()}`);
        }
}


// here we send function as argument
foo(askUserName)();
