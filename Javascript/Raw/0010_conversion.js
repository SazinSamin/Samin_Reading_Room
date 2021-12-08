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



