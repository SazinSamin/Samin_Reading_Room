class Person {
  name : string;
  age : number;

  constructor(name : string, age : number) {
    this.name = name;
    this.age = age;
  }

  display () : void {
    console.log(`name: ${this.name}, age: ${this.age}`);
  }
}

const p1 = new Person('Ashique', 25);
p1.display();

const p2 = new Person('Abir', 25);
p2.display();
