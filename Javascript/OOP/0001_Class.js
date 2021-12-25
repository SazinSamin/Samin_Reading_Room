class Person{
        // constructor method.
        // always add constructor method, if you forget js will add for you.
        constructor(name, birthYear){
                this.firstName = name;
                this.birthYear = birthYear;
        }

        getAge(currentYear = new Date().getFullYear()) {
                console.log(`${this.firstName} ${currentYear - this.birthYear}`);
        }
};

// initialize the instance variable through passing value to the constuctor
// and creation of a Class instance
const person1 = new Person("Sazin", 1998);
person1.getAge();     

// in one line
new Person("Ahique", 1995).getAge();
