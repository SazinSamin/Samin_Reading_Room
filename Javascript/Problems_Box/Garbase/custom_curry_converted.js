// to understand deeply copy this below codes to your editor and see the result in browser console.

function currying (foo) {
        return function curried(...args) {
                if(args.length >= foo.length) {
                        return foo.apply(this, args);
                } else {
                        return function (...args2) {
                                console.log(args.concat(args2));
                                return curried.apply(this, args.concat(args2));
                        }
                }
        }
}

function getSum(a, b, c) {
        return a + b + c;
}

const curryConverted = currying(getSum);
const c1 = curryConverted;
console.log(c1);

const c2 = curryConverted(1);
console.log(c2);

const c3 = c2(2);
console.log(c3);        

const c4 = c3(3);
console.log(c4);
