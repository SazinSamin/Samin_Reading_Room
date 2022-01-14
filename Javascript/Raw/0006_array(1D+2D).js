// 1D array
const number1 = [23, 43, 88, 76, 56, 12, 57, 78, 17];
const number2 = number1.map(makeDouble);
number2.forEach(print);


// map
function makeDouble(value) {
        return value * 2;
}

// print
function print(value) {
        console.log(value);
}

number3 = number1.filter(filterValue);
// filter
function filterValue(value) {
        return value % 2;
}
console.log("filter");
number3.forEach(print);

// make a array empty
// https://stackoverflow.com/questions/1232040/how-do-i-empty-an-array-in-javascript
number2 = [];


// 2D array
// creating 2D array
let arrayL = 5;
let innerArrayL = 5;
const array = new Array();      // we can also set array length here, which is not mandotory.
for (let i = 0; i < arrayL; i++) {
        array[i] = new Array();
}

let res = [];
for (let i = 0; i < arrayL; i++) {
        for (let j = 0; j < innerArrayL; j++) {
                array[i][j] = 1;
        }
}

console.log(array);
