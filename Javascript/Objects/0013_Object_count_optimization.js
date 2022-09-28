// https://www.youtube.com/watch?v=Z45VQuHO_VA&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=6
// from 9 minutes

// methods defined inside refer object.
const personMethods = {
        eat: function () {
                console.log(`Now I am eating`);
        },
        sleep: function () {
                console.log(`Now I am sleeping`);
        }
};

function Person(name, age) {
        let person = {};

        person.name = name;
        person.age = age;

        // here we do object count optimization
        // if we define those two methods inside here, this will create and take sperate memory space
        // everytime we create  and return a object from this funciton.
        // but if we take or refer from a other object(personMethods), these two methods already defined and created, so
        // it's create once and we just refer this here for our use.
        person.eat = personMethods.eat;
        person.sleep = personMethods.sleep;

        return person;
}

const p1 = Person("Hasan", 26);
const p2 = Person("Ahmed", 23);

console.log(p1);
