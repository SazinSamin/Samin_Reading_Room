// https://www.w3schools.com/js/js_this.asp


// "this" refer to that object from where it calling.
// "this" behave different in arrow function. => https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Good_Practice/1117_this_in_arrow_function.js


const Person = {
        firstName : "Sazin",
        lastName: "Samin",
        age : 23,
        myFunction: function(){
                // here this will return the "Person" object.
              return this;
        }
}

console.log(Person.myFunction().firstName);
console.log(Person.myFunction().lastName);
console.log(Person.myFunction().age);

// in outside any method this refer to the global object
console.log(this);




// here "this" will replace by the element on which the the function has called.
const s = [1, 2, 3, 4, 5, 6, 7, 8];

Array.prototype.myMap = function(callback) {
        
    const newArr = [];
    
    for(let i = 0; i < this.length; i++) {
        newArr.push(callback(this[i]));
    }
        
    return newArr;
}

const res = s.myMap((ele) => ele * 2);
console.log(res);
