// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/prevent-object-mutation

// const does not alone make a variable completely immutable. const does only prevent the variable 
// from reassignment. That means we can still change the variable material from inside.
// So, to make the variable and it's variable completely immutable we have to freeze it through 
// Object.freeze
// Now we can't alter anything about that variable and strict mode if we try to do it will through an error

const person1 = {
        name: "Hasan",
        age: 24
};

Object.freeze(person1);
person1.name = "Rafsan";

console.log(person1.name);      // output: Hasan
