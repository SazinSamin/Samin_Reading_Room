// primitive data types are:
// String, Number, Boolean, Null, Undefined and Symbol.
// reference data types are:
// Object, Array, Function, Date, excluding primitive type.

// primitive types data type memory allocate in stack, whereas reference type in heap.
// when reference variable created js create memory in heap but there also a pointer created in stack
// so variable name point to stack and stack point to that memory location in heap.

// if we copy a primitive variable to other variable.
// in case of primitive variable changing one variable doesn't change the other variable.
let a = 10;
let b = a;
a = 12;
console.log(a, b); // (12, 10)

// also primitive type isn't mutable
const b = "Tamim";
// this below line leads to "TypeError: Cannot assign to read only property '1' of string 'Tamim'" in nodejs
// in browser although it didn't throw any error, but also didn't mutate the value.
b[1] = 'x'
console.log(b); 





// if we copy a reference variable to other variable.
// in case of reference variable changing one variable make change the other variable as well.
// when we copy another reference variable to other, another pointer created in stack for that copied variable.
// but that pointer points to the same memory location in the heap where the first variable actullay points to.
// thats why in case of reference variable changing one variable make change the other variable as well.
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





// as we see that making change to the reference variable also reflect to the other's we copy variable.
// but there is differnce between assignment(=) and mutatation(.) between variable.
let person = {
        name: "Sakib",
        age: 35,
};

// we assign one variable to other variable. Another pointer created for the new variable but that pointer 
// points to that same memory location for the first variable in heap.
let player = person;
// here we mutate that properties of the object, so change in any object reflect to the other's as well.
person.name = "Tamim";
console.log(person, player);  // { name: 'Tamim', age: 35 } { name: 'Tamim', age: 35 }

// but this is assignment again, so new pointer create in the stack and points to the newly allocated memory
// in the heap.
person = {"Cat": 1};
console.log(person, player); // { Cat: 1 } { name: 'Tamim', age: 35 }

// we did the same thing again.
player = {};
console.log(person, player); // { Cat: 1 } {}


