// primitive data types are:
// String, Number, Boolean, Null, Undefined and Symbol.
// reference data types are:
// Object, Array, Function, Date, excluding primitive type.

// primitive types data type memory allocate in stack, whereas reference type in heap.

// if we copy a primitive variable to other variable.
// in case of primitive variable changing one variable doesn't change the other variable.
let a = 10;
let b = a;
a = 12;
console.log(a, b); // (12, 10)


// if we copy a reference variable to other variable.
// in case of reference variable changing one variable make change the other variable as well.
let obj1 = {
        count : 1,
};
let obj2 = obj1;
console.log(obj1, obj2); // { count: 1 } { count: 1 }
obj1.count = 2;
console.log(obj1, obj2); // { count: 2 } { count: 2 }
// in the above example you can see if you change a object property others also reflect that change.

// same thing happened for array also
let arr1 = [1, 2, 3, 4];
let arr2 = arr1;
arr2[1] = 20;
console.log(arr1, arr2);


