// https://www.programiz.com/javascript/closure
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Closures
// https://stackoverflow.com/questions/111102/how-do-javascript-closures-work

// closure is a function inside other function.
// a function return another function.

// In C and most other common languages, after a function returns, all the local variables are 
// no longer accessible because the stack-frame is destroyed.
// But JS it is possible by 
// When a function is invoked via the internal [[Call]] method, the [[Environment]] reference 
// on the function-object is copied into the outer environment reference of the environment 
// record of the newly-created execution context (stack frame)


function getA(a) {
        return function(b) {
                console.log(`${a}, ${b}`);
        }
}

const myFunc = getA(10);
// even the getA() function execution reaches the end, the inner function still has access to the 
// variable
myFunc(20);

// another example
function count() {
        // because of closure this counter variable will retain after finish this function execution
        let counter = 0;
        function increment() {
                counter ++;
                return counter;
        }
        return increment;
}

let foo = count();
console.log(foo());
console.log(foo());
console.log(foo());
