// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/reverse

const array = [1, 2, 3, 4, 5];
array.reverse();
console.log(array);


// careful, this below code doesn't work properly.
const obj1 = {
        1: 6,
        2: 4,
        3: 2,
        length: 3
};

Array.prototype.reverse.call(obj1);
console.log(obj1);
