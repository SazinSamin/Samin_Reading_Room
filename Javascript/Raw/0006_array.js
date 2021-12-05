// https://www.w3schools.com/js/js_array_iteration.asp


const number1 = [23, 43, 88, 76, 56, 12, 57, 78, 17];
const number2 = number1.map(makeDouble);
number2.forEach(print);


// map
function makeDouble(value){
        return value * 2;
}

// print
function print(value){
        console.log(value);
}

number3 = number1.filter(filterValue);
// filter
function filterValue(value){
        return value % 2;
}
console.log("filter");
number3.forEach(print);

