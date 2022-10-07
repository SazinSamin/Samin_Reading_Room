// https://www.geeksforgeeks.org/what-is-shallow-copy-and-deep-copy-in-javascript/


// first know about the difference between primitive vs reference -> 
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Raw/0016_primitive_vs_reference.js


// When we copy js primitive object like number, string, boolean it do deep copy, but non-primitive data type like
// array & object get shalow copy.

// for array deep copy read -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Data%20Structure/Array/0002_array_Copy.js
// for object deep copy -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Objects/0012_deep_copy_of_object.js


// when we initialize the array with an array, Js first allocate memory for the array elememnt,
// put all element there, then make the "array" name variable(below code) point to that memory location.

const array = [1, 2, 3, 4, 5, 6, 7];



// shallow copy.
// simple assignment do shallow copy in Js, mean when we use assignment operator, Js make a reference
// to that variable, means it(the new "cp1" variable) also point to the same memory location 
// hold by the "array" variable here.
// so any changes  to any variable also reflect to the others as well.

const cp1 = array;
cp1[0] = 100;

console.log("array: " + array);
console.log("cp1: " + cp1);




// deep copy.
// for deep copy, completely new memory space allocated & copy all the element from the previous
// memory location, the variable "cp2" now pointing to the newly allocated memory space,
// so any change to new or old array doesn't reflect to other as well, because they are in different
// memory location.

const cp2 = [...array];
cp2[0] = 1000;

console.log("array: " + array);
console.log("cp2: " + cp2);


// for deep copy of any reference data type use "lodash"
import _ from 'lodash';
const cp3 = _.cloneDeep(cp2);
console.log(`arr3: ${cp3}`);

