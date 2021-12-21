// Object display

const person1 = {
        firstName: "Sazin",
        lastName: "Samin",
        birthYear: 1999,
        // object method
        details: function () {
                return `Name: ${this.firstName} ${this.lastName}\n birthYear: ${this.birthYear}`;
        }
};

// display properties values using for loop
for(let i in person1){
        console.log(person1[i]);
}

// Any JavaScript object can be converted to an array using Object.values():
const person1Array = Object.values(person1);
console.log(person1Array);


// Any JavaScript object can be stringified(converted to a string) 
// with the JavaScript function JSON.stringify():
// JSON.stringify will not stringify functions.
let person1String = JSON.stringify(person1);
console.log(person1String);
