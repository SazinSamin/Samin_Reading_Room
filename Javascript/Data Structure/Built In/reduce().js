// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/reduce



// reduce use to access to previous & current value of an array or array like object.
// it do operation on previous & current value then store the result in previous value, then again & again do operation on curr & prev
// values until the array reaches the end. 
// Then it return the last previous value or last executing statement result.



const array = [1, 2, 3, 4, 5, 6, 7, 8, 9];
function getSum(array) {
        return array.reduce((prev, curr) => 
                prev + curr
        )
}

console.log(getSum(array));





// counting elements count
const names = ["Sazin", "Sazin", "Reshed", "Abid", "Megh"];

const func = names.reduce((prev, curr) => {
        if(curr in prev) {
                prev[curr]++;
        } else {
                prev[curr] = 1;
        }
        return prev;


        // here look, we have add a prev values or initial value as empty object {}, 
        // where we check & insert the elements, also return that object
        
}, {} // initialValue
);

console.log(func);





// sum of value of object array.
let sum = [{ x: 1 }, { x: 2 }, { x: 3 }].reduce(function (prev, curr) {
        // we have to give the initial value here. because,
        // in first time we can access the object previous & current value with prev.x & curr.x, but
        // when it first calculation finish it, put it data to prev, when next time now then become, 
        // just a numeric value, it can't access like prev.x which refer to the object value.

        // return prev.x + curr.x ;     // not possible.
        return prev + curr.x;
}, 0)

console.log(sum);





