// https://www.w3schools.com/js/js_this.asp
// "this" refer to that object from where it calling.

const Person = {
        firstName : "Sazin",
        lastName: "Samin",
        age : 23,
        myFunction: function(){
                // here this wil return the "Person" object.
              return this;
        }
}

console.log(Person.myFunction().firstName);
console.log(Person.myFunction().lastName);
console.log(Person.myFunction().age);

// in outside any method this refer to the global object
console.log(this);

