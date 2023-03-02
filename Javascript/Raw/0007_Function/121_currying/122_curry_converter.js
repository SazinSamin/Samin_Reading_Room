import _ from 'lodash';

// custom implementation of curry converter
function currying (foo) {
        return function curried(...args) {
                if(args.length >= foo.length) {
                        // here the condition where we call our given function
                        return foo.apply(this, args);
                } else {
                        return function (...args2) {
                                // here recursively we call the curried function to match the first requirement to call the given function.
                                // also in currying we divide the arguments which in normal function call at once.
                                // so here in recursive call we concate those arguments using concat.
                                return curried.apply(this, args.concat(args2));
                        }
                }
        }
}

function getSum(a, b, c) {
        return a + b + c;
}

// curry converter to convert normal function in curried one.
const curryConverted = currying(getSum);
// we can now call the currying function in many fashoin
console.log(curryConverted(1, 2, 3));
console.log(curryConverted(1)(2, 3));
console.log(curryConverted(1)(2)(3));



// using lodash
const lodashCurry = _.curry(getSum);
console.log(lodashCurry);
console.log(lodashCurry(1, 2, 3));
console.log(lodashCurry(1)(2, 3));
console.log(lodashCurry(1)(2)(3));
