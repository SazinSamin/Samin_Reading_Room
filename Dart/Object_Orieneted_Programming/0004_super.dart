class Person {
  String name;
  int age;
  
  Person(this.name, this.age);
  void display() {
    print('$name, $age');
  }
}

class Student extends Person {
  @override
  String name;
  @override
  int age;
  int id;
  
  // here we use "super" keyword to initialize the super class constructor by passing data from sub class constructor.
  Student(this.name, this.age, this.id) : super(name, age);

  
  
  @override
  void display() {
    
    // "super" keywork is used to access the super class method from sub class.
    
    super.display();
    print('$id');
  }
}



void main() {
  Student s1 = Student('Sazin', 24, 11);
  s1.display();
}
