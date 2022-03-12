// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/arguments

// argument is an array like object which have the values passed into the function.
// it is a function method.
// it like array but not array, because it only have the length property.

function getSum() {
        let sum = 0;
        for(let i = 0; i < arguments.length; i++) {
                sum += arguments[i];
        }
        return sum;
}

console.log(getSum(1, 2, 3, 5, 6));
