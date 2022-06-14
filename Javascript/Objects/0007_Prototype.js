// first know what is prototype in below link:
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Objects/0002_OwnProperty_%26_Prototype.js
// https://www.youtube.com/watch?v=6WBaPpFJhR0&list=PLHiZ4m8vCp9OkrURufHpGUUTBjJhO9Ghy&index=70
// https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/Object_prototypes.



// JS is a prototype based language
// prototype helps us to add property directly outside the constructor function
// every object in js has prototype & prototype chain.
// prototype also use for inhertance because if we add a prototype to a object, it will be avaiable to all instance.
// we can also add prototype to js built-in object like String, Number, Boolean (which is highly un-recommended)


function Person(first, last, age) {
        this.firstName = first;
        this.lastName = last;
        this.age = age;
};


// using js "prototype" property allow to add property or method to the
// We can add property directly outside the constructor function

Person.prototype.job = "Software engineer";
Person.prototype.getName = () => this.firstName + " " + this.lastName;

let person1 = new Person("Sazin", "Samin", 24);




// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/object-oriented-programming/change-the-prototype-to-a-new-object
// add many prototype at once
Person.prototype = {
        // define constructor also, otherwise check constructor will fail.
        constructor: Person,
        location: "Dhaka",
        getLocation () {
                return this.location;
        }
}


console.log(person1);
// check the instance has created from the Object.
console.log(person1.constructor == Person);     
