// https://www.w3schools.com/js/js_class_static.asp

// class methods and variables belongs to class not instance,
// we don't have to create instance of the class to use class variables and methods.
// so, they have consistancy of data.

// in JS they defined with the keyword "static".

class Person {
        // class variable
        static _name = "";
        static _age;

        // class method
        static setStatus(name, age) {
                this._name = name;
                this._age = age;
        }

        // class method
        static display (instance) {
                console.log(`${this._name}, ${this._age}`);
        }
}

Person.setStatus("Sazin", 24);
Person.display();       
