// How we can create object without new
function Person (name, age) {
        // object creation
        // for common methods in all instance we use prototype, but don't need to understand now
        // just focus on Object.create to create a object.
        const person = Object.create(Person.prototype);
       
        // put argument value to object value
        person.name = name;
        person.age = age;

        // return object
        return person;
}


// for common methods in all instance we use prototype.
Person.prototype = {
        eat () { console.log("Person is eating") },
        sleep() { console.log("Person is sleeping") }
}

// Object instance
const p1 = Person("Hasan", 34);
console.log(p1);



// Using new
function Student (name, age) {
        // Now for using "new" in times of object creation we don't need to create Object by ourself
        // javascript will do this for us.
        // const this = Object.create()  

        this.name = name;
        this.age = age;
        
        // also we don't need to return the object, js will do for us
        // return this;
}

const s1 = new Student('Hasan', 22);
console.log(s1);
