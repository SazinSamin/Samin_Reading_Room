// https://www.tutorialsteacher.com/typescript/abstract-class

// abstruct class
// declare with word "abstruct"


abstract class Person {
  name: string;
  age: number;
  // abstruct properties
  abstract gender : string;


  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }
  // abstruct method (don't have the implmentation details)
  abstract display(): void;
}

class Student extends Person {
  id: number;
  // must redeclare again in child class
  // otherwise will throws error
  gender: string;

  constructor(name: string, age: number, id: number, gender:string) {
    super(name, age);
    this.id = id;
    this.gender = gender;
  }
  // abstrcut method must have to be implemented at inherited class,
  // otherwise it will throws error
  display(): void {
    console.log(`name: ${this.name}, age: ${this.age}, id: ${this.id}, gender: ${this.gender}`);
  }
}

// throws error, abstruct class can't be instantiate
// const p1 = new Person('Ashique', 33);
const s1 = new Student("Ashique", 22, 33, 'Male');
s1.display();
