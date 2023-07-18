// https://www.w3schools.com/typescript/typescript_tuples.php
// know lot more about tuple -> https://www.typescriptlang.org/docs/handbook/2/objects.html#tuple-types


// tuple declaration
let tuple1 : [number, string, true] = [1, 'Abir', true];

console.log(tuple1);

// can't assign in different order
// let tuple2 : [number, string, true] = ['Abid', 1, true];

let tuple3 : readonly[number, string] = [2, 'Poltu'];
// can't push element as it is declared as readonly
// tuple3.push('ashique');
