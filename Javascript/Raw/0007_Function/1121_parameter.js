// https://www.w3schools.com/js/js_function_parameters.asp

// Function parameters are the names listed in the function definition.
// Function arguments are the real values passed to(and received by) the function.

// we can send as many as argument as parameter, missing parameter will be as undefined
// arguments are pass by value

// Parameter Rules
// JavaScript function definitions do not specify data types for parameters.
// JavaScript functions do not perform type checking on the passed arguments.
// JavaScript functions do not check the number of arguments received.

// js 2015 can also take default parameter
function getSum(a = 0, b = 0) {
        return a + b;
}

function findMax(val) {
        let min = -1,max = 0;
        for(let i = 0; i < arguments.length; i++ ) {
                if(max < arguments[i]) {
                        max = arguments[i];
                }
        }
        return max;
}


console.log(findMax(14, 67, 23, 78, 34, 67, 23, 6));

