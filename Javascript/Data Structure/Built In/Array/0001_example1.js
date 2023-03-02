// array in JS is mutable.



// array elements could be anything.
const array = [1, 2, 3, 4, "String", true];



// access an element in array.
console.log(array[0]);
// change a element in array.
array[1] = 100;



// add elements in last of the all elements in array.
array.push(120);
// add elements in first of the all elements in array.
array.unshift(130);


// remove elements in last of the all elements in array.
// ** both popped & shift return the deleted element,
const popped = array.pop();
// remove elements in first of the all elements in array.
const shifted = array.shift();

console.log(array);

