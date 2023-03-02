// https://medium.com/javascript-scene/higher-order-functions-composing-software-5365cf2cbe99
// difference between first class function and higher order function
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





// everything is in js is an object, function also a object, but it is special type of object.
function foo () {
        console.log('I am function');
}

// here you can see that as function is a object so we add property to that object like in normal object we do
foo.name = 'function name is foo';
console.log(foo.name); 
