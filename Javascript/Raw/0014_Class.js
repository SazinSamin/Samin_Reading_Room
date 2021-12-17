// https://www.w3schools.com/js/js_classes.asp
// JS class must have to "constructor" method

class Person{

        constructor(name, age, status){
                this.name = name;
                this.age = age;
                this.status = status;
        };

        display(){
                console.log(`${this.name}, ${this.age}, ${this.status}`);
        }
}

let p1 = new Person("Sazin", 24, "Student");
p1.display();
let p2 = new Person("Abeed");
p2.display();
