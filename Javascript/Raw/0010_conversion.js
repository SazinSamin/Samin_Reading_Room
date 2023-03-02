let PIString = "3.1416";
let PINum = Number(PIString);
console.log(PINum);

let PIInt = parseInt(PIString);
console.log(PIInt);     
let PIFloat = parseFloat(PIString);
console.log(PIFloat);


let numeric = 3.1416;
let numericString = String(numeric);
console.log(numericString);
console.log(numeric.toString());


let exp = 3453445.656456;
let convertExp = exp.toExponential();
console.log(convertExp);

// this will rounded the value after the point
let fixed = 3.14164545345;
let afterFixed = fixed.toFixed(3);
console.log(afterFixed);

// this is will take that whole number mention in arguments
// the same value in fixed will be 3.142 & in precision 3.14     
let precision = 3.14164545345;
let afterPrecision = precision.toPrecision(3);
console.log(afterPrecision);


// JS toString() method can take radix as argument and convert to that base form
// radix must be up to 32, like 2 for binary, 8 for octal, 
// toString(2) for convert to binary.


// binary to decimal
let bin_to_dec = 0b0001010101;
console.log(bin_to_dec.toString(10));
// we can also use parseInt function for conversion
// let decResult = parseInt(bin_to_dec, 10).toString();
console.log(decResult); 


// decimal to binary
let num = 15;
let binnum = num.toString(2);
console.log(binnum);



