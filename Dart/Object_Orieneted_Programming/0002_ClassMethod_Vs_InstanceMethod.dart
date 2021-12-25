// https://www.geeksforgeeks.org/instance-and-class-methods-in-dart/#:~:text=All%20the%20methods%20declared%20with,called%20by%20using%20class%20name.

class Person {
  String name;
  int age;
  Person(this.name, this.age);

  // class variable or member, directly can call with the name of class
  static String? about;

  // instance methods, can only acess instance variable & only avaiable with 
  // Class Instance.
  void display() {
    print('$name, $age');
  }

  // class method, can access to only static member or class variable not instance variable
  // directly can call with Class name
  static void getPerson(){
    print(about);
  }
}


void main() {
  // instance member initialization.
  Person p1 = Person('Sazin', 24);
  // instance method class  
  p1.display();
  // we can also call instance method like this.
  Person('Ahisque', 25).display();


  // class variable call.
  Person.about = 'Sazin is a Software engineer';
  // class method call
  Person.getPerson();
}
