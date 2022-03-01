const s = [1, 2, 3, 4, 5, 6, 7, 8];


// herer we also add another method to the Javascript Array Object Prototype.
// so we can use that method on a array like other built in method(slice, splice, map, reduce)

Array.prototype.myMap = function(callback) {
    const newArr = [];
    for(let i = 0; i < this.length; i++) {
        newArr.push(callback(this[i]));
    }
    return newArr;
}

const res = s.myMap((ele) => ele * 2);
console.log(res);
