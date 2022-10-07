// https://stackoverflow.com/questions/7486085/copy-array-by-value
// https://www.freecodecamp.org/news/how-to-clone-an-array-in-javascript-1d3183468f6a/


// first refresh the concept deep & shallow copy in below link
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Good_Practice/1115_deep_%26_shallow_copy.js


// if we normally assign a new array to another array it will do the shallow copy.
// means, the newly created variable will just copy the reference or memory location of the array,
// not all the array elements, 
// so any changes in the newly copied array will also make changes the old array as well,
// because both of the array memory location ar same.


const arr1 =  [1, 2, 3, 4, 5];
const res1 = arr1;
res1[2] = 200;

console.log(arr1); // [1, 2, 200, 4, 5]
console.log(res1); // [1, 2, 200, 4, 5]


// so, to avoid shallow copy, we need deep copy means we have to create a new array which have
// complete seprate memory location, any change to new array doesn't reflect to the old array, 
// one of the method to do deep copy by spreading operator.

const arr2 = [1, 2, 3, 4, 5];
const res2 = [...arr2];
res2[2] = 200;

console.log(arr2); // [1, 2, 3, 4, 5]
console.log(res2); //[1, 2, 200, 4, 5]
