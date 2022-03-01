const s = [1, 2, 3, 4, 5, 6, 7, 8];


// herer we also add another method to the Javascript Array Object Prototype.
// so we can use that method on a array like other built in method(slice, splice, map, reduce)


// implementation of own "map" method.
Array.prototype.myMap = function (callback) {
    const newArr = [];
    for (let i = 0; i < this.length; i++) {
        newArr.push(callback(this[i]));
    }
    return newArr;
}

const res = s.myMap((ele) => ele * 2);
console.log(res);





// implementation of own "filter()" method
Array.prototype.myFilter = function (callback) {
    const newArray = [];
    for (let i = 0; i < this.length; i++) {
        if (callback(this[i])) {
            newArray.push(this[i]);
        }
    }
    return newArray;
};

const res1 = s.myFilter(function (item) {
    return item % 2 === 1;
});

console.log(res1);
