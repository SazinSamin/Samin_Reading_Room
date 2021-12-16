// https://developer.mozilla.org/en-US/docs/Glossary/First-class_Function
// First - class Function
// A programming language is said to have First - class functions when functions in that language are treated 
// like any other variable.For example, in such a language, a function can be passed as an argument to other functions, 
// can be returned by another function and can be assigned as a value to a variable.


function askUserName(){
        return prompt("What is your name");
}

// here we receive function as argument
const foo = function(name){
        // we can also return function which called "higher order funciton"
        return function(){
                console.log(`Assalamu Alaikum ${name()}`);
        }
}


// here we send function as argument called "callback funciton"
foo(askUserName)();
