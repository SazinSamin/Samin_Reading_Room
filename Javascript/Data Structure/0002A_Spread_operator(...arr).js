// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Spread_syntax

// spread operator(...) is used for spreading of array or object elements. It is used like for varying multiple parameters in functions
// spread operator does like an array have [1, 2, 3], then spread operator return 1, 2, 3 



const arr1 = [1, 2, 3, 4, 5];
// using spread to insert another array elements.
let arr2 = [0, ...arr1, 6];
console.log("arr2");
console.log(arr2);



// spread operator in function arguments.
function getSum(...args) {
        let sum = 0;
        for (let i = 0; i < args.length; i++) {
                sum += args[i];
        }
        return sum;
}

console.log(getSum(0, 1, 2, 3, 4, 5, 6));
