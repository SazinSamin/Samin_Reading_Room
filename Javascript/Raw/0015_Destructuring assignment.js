// Destructuring assignment
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment

// unpacking from an array.
const array = [1, 2, 3]
const [a, b] = array;
console.log(a);
console.log(b);

// Assigning the rest of an array to a variable using spread operator
const [c, ...d] = array;
console.log(c);
console.log(d);


// unpacking from object requres same of object variable as assigning variable, otherwise through an error.
const person1 = {
        name: "Hasan",
        age: 24
};

const {name, age} = person1;
console.log(name);
console.log(age);


// you can also assign new name to the assigning variable when do destructuring assignment from Object.
const {name: userName, age: userAge} = person1;
console.log(userName);
console.log(userAge);










