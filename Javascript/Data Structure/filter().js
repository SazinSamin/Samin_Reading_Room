// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/filter

// filter is as it's name like.
// it traverse through the all elements & return which element pass the given condition
// it create & return a new array, also doesn't mutate the original array.


const primes = [1, 2, 3, 4, 5, 6, 7, 8, 9];

// get the even numbers out using filter
const res = primes.filter(ele => ele % 2 == 0);
console.log(res);
