// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/rest_parameters
// https://en.wikipedia.org/wiki/Variadic_function

// "rest paramters" which aceept an indefinite parameters.
// a function definition only can have one "rest paramters".
// rest parameters have to be the last paramters of a function definition.



function getSum(a, b, c, ...args) {
        let sum = 0;
        for (let i = 0; i < args.length; i++) {
                sum += args[i];
        }
        return sum;
}

console.log(getSum(0, 1, 2, 3, 4, 5, 6));
