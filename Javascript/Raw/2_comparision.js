// list of things are false ->   0, false, undefined, null, NaN


var red = false;
var blue = true;

// undefined variable is false in javascript
var green;
if (green) {
        console.log("This statement is true");
} else {
        console.log("This statement is false");
}

var num1 = 5;
var num2 = "5";

if (num1 == num2) {
        console.log("num 5 & string 5  are same");
} else {
        console.log("num 5 & string 5 are not same");
}

if (num1 == num2) {
        console.log("num 5 & string 5  are same");
} else {
        console.log("num 5 & string 5 are not same");
}


var myNum = 10;
var myString = "Sazin";
var result = myString - myNum;
console.log(result);
