// https://www.programiz.com/javascript/examples/function-overloading#:~:text=In%20programming%2C%20function%20overloading%20refers,at%20the%20last%20gets%20executed.
// https://stackoverflow.com/questions/456177/function-overloading-in-javascript-best-practices

// Javascript doesn't have native support for method overloading like Java or C++.
// But we can achieve that concept using
// if-else & switch by
//      * counting the number of argument pass to the function
//      * checking the types of arguments
//      * 

class Person {
        constructor(name, age) {
                this.name = name;
                this.age = age;
        }

        display() {
                if(arguments.length == 1) {
                        console.log(`${this.name}`);
                } else if (arguments.length == 2) {
                        console.log(`${this.name} & ${this.age}`);
                }
        }
}

const p = new Person("Ahemd", 44);
p.display(1);
p.display(1, 2);
