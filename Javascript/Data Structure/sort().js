// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/sort

const arr = [3, 7, 2, 8, 4, 9, 1];

// sort() first convert the array element into string, then use UTF-16 code for sorting.
// so, we should carefull because "80" will come before "9" according to string UTF-16 code

// for sorting string or character we don't need below compareFunction.


// In default it sort in ascending order.
// It sort the array in place, means it mutate the original array. 
// It return a new sorted array also.


// The sorting algo in JS is stable. means if we have if a map has names & grades, then if we 
// sort map according to grades value, then after sorting the names will also retain previous 
// position.

// // for sorting string or character we don't need below compareFunction.

// compareFunction(a, b) return value	sort order
//        > 0	            sort b before a
//        < 0	            sort a before b
//        === 0         keep original order of a and b


arr.sort((a, b) => a - b);


// It also return a new sorted array.
// const res = arr.sort((a, b) => a - b);


console.log(arr);
console.log(res);



// sort in alphabetical order 

function alphabeticalOrderSort(arr) {
    return arr.sort((a, b) => (a < b) ? -1 : 1);
}
console.log(alphabeticalOrderSort(["a", "r", "s", "a", "u", "g"]));
