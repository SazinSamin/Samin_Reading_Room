// https://www.youtube.com/watch?v=uZqyRJkTQog

// implicit bindings
const person1 = {
        name: "Sakib",
        age: 23,
        printName: function () {
                console.log(this.name);
        },
        father: {
                name: "Ahmed",
                age: 55,
                printName: function () {
                        console.log(this.name);
                },
        },
};

// person1.printName();
// person1.father.printName();

// explicti binding by call & apply
// see what is call & apply
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Raw/0007_Function/117_Function_Call_%26_Apply.js
person1.father.printName.call(person1);
person1.printName.apply(person1.father);


// explicit binding by bind()
// unlike call & apply which get the object & call the function on object, 
// it return function instance which in latter we can invoke
const person1Instance  = person1.printName.bind(person1.father);
person1Instance();

// shorthand of the upper codes.
person1.printName.bind(person1.father)();


// new binding
class Person {
        constructor(name, age) {
                this.name = name;
                this.age = age;
        }
}
// old style constructor
/*
function Person (name, age) {
        this.name = name;
        this.age = age;
}*/

const person2 = new Person("Sakib", 23);
console.log(person2);


// window binding, autometicall bind to the brower window or nodejs global object
// leads to undefined, to avoid such behaviour use strict mode.
const printName = function () {
        console.log(this.name);
}

printName();
