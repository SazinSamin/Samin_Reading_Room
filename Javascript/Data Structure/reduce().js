
// The value returned by reduce() would be that of the last callback invocation or last excuting result.
const array = [1, 2, 3, 4, 5, 6, 7, 8, 9];
function getSum(array) {
        return array.reduce((prev, curr) => 
                prev + curr
        )
}

console.log(getSum(array));



// sum of value of object array.
let sum = [{ x: 1 }, { x: 2 }, { x: 3 }].reduce(function (prev, curr) {
        // we have to give the initial value here. because,
        // in first time we can acess the object previous & current value with prev.x & curr.x, but
        // when it first calculation finish it, put it data to prev, when next time now then become, 
        // just a numeric value, it can't access like prev.x which refer to the object value.

        // return prev.x + curr.x ;     // not possible.
        return prev + curr.x;
}, 0)

console.log(sum);
