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
  // The superclass constructor must be called in SubExample because the compiler has to somehow initialize the variable a of Example.
 
  Student(String name, int age, int id)  : _name = name, _age = age, 
            _id = id,  super(name, age + 10);
 
  // sorthand format, but in case we have found that we can't modify the passing data to super class from sub class.
  // Student(this.name, this.age, this.id) : super(name, age);

  
  
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
