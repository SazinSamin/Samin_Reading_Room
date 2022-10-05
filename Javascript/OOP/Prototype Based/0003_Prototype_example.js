const s = [1, 2, 3, 4, 5, 6, 7, 8];


// here we also add another method to the Javascript Array Object Prototype.
// so we can use that method on a array like other built in method(slice, splice, map, reduce)


// implementation of own "map" method.
// remember we can't use the arrow function here, because "this" doesn't work in arrow function
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Good_Practice/1117_this_in_arrow_function.js
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


// If we add a method to the master Object then we can access that from anywhere in Javascript. Because everything
// in js create from master Object or inherit the master Object methods.
 
const arr = new Array();
console.dir(arr);

Object.prototype.samin = function() {
        console.log('I am Samin');
}

arr.samin();


