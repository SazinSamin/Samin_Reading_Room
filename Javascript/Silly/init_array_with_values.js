// https://stackoverflow.com/questions/4049847/initializing-an-array-with-a-single-value

// 100 here the arr ele amount, 0 the value would be filled in those places.
const arr1 = new Array(100).fill(0);


const arr2 = new Array();
let size = 100;
while (size--) arr2.push(0);
