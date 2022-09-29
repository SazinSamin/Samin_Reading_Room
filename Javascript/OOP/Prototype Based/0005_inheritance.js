// https://www.youtube.com/watch?v=93Styj1K9fY&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=8

// I can't understand the below code

function Person (name, age) {
        this.name = name;
        this.age = age;
}

function Cricketer (name, age, type, country) {
        Person.call(this);
        this.name = name;
        this.age = age;
        this.type = type;
        this.country = country;
}

Person.prototype = {
        eat() { console.log(`${this.name} is playing`); }
}

Cricketer.prototype = Object.create(Person.prototype);
Cricketer.prototype.constructor = Cricketer;


const p1 = Cricketer("Sakin", 35, "Alrounder", "Bangladesh");

