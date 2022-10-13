// currying is a programming style or paradigm
// It is used to reduce the parameters of a function
// Currying object is to reduce paramters at least as possible or even reduced into one parameter is best by
// dividing one function into many and return from there.


// normall function
function foo (a, b, c) {
        return a + b + c;
}

// currying function
function currying(a) {
        return function (b) {
                return function (c) {
                        return a + b + c;
                }
        }
}

console.log(currying(1)(2)(3));

// using currying pattern we can also do a certain task in multiple steps.
const foo1 = currying(1);
const foo2 = foo1(2);
const res = foo2(3);

console.log(res);


// imperative vs declearative
// imperative pattern style
function vat1(price, tax) {
        return price + (price * tax);
}

const v1 = vat1(100, .1);
const v2 = vat1(200, .1);
const v3 = vat1(300, .1);
console.log(v1, v2, v3);

// but using currying we can do declearative pattern style
function vat2(tax) {
        return function (price) {
                return price + (price * tax);
        }
}

const taxRate = vat2(.1); // look this one is parital function, beacuse here we use partial portion of the total function
const v4 = taxRate(100);
const v5 = taxRate(200);
const v6 = taxRate(300);
console.log(v4, v5, v6);



// curry arrow function 
const getSumArrow = (a) => (b) => (c) => a + b + c;
console.log(getSumArrow(1)(2)(3));
