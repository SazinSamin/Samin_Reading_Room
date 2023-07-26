class Person {
  name: string;
  age: number;

  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }

  display(): void {
    console.log(`name: ${this.name}, age: ${this.age}`);
  }
}

class Student extends Person {
  id: number;
  constructor(name: string, age: number, id: number) {
    super(name, age);
    this.id = id;
  }

  display(): void {
    super.display();
    console.log(`id: ${this.id}`);
  }
}

const s1 = new Student("Ashique", 23, 99);
console.log(s1.name);
console.log(s1.age);
s1.display();
