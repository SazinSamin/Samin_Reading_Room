// https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/Basics

//  creation of javascript object using Object literals
const person = {};
person.firstName = "Sazin";
person.secondName = "Samin";
person.age = 24;

console.log(`${person.firstName}, ${person.secondName}, ${person.age}`);



// Objects are mutable: They are addressed by reference, not by value.
// here "x" is not the copy of the "person" object, it actually reference to the person object or
// that object memory location.
// so any change to object "x" or "person", that reflect to the other object as well.
const x = person;
console.log(`${x.firstName}, ${x.secondName}, ${x.age}`);
x.age = 23;
console.log(`${x.firstName}, ${x.secondName}, ${x.age}`);       




// nester object.
const person1  = {
        name: "Ashique",
        age: 24,
        data: {
                location: "Bangladesh",
                userID: 123,
        }
}

console.log(person1.data.userID);
// we can also do
// console.log(person1['data']['userID']);
