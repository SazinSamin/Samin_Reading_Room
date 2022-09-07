// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_objects/Function/bind
// https://www.youtube.com/watch?v=uZqyRJkTQog


// explicit binding by bind()
// unlike call & apply which get the object & call the function on object, 
// it return function instance which in latter we can invoke

function printDetails () {
        console.log(`${this.name}, ${this.age}`);
}

const person1 = {
        name: "Sakib",
        age: 23,
};

const person1Obj = printDetails.bind(person1);
person1Obj();
