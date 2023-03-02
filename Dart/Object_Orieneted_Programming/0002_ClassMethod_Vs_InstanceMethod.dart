// https://www.geeksforgeeks.org/instance-and-class-methods-in-dart/#:~:text=All%20the%20methods%20declared%20with,called%20by%20using%20class%20name.

class Person {
  String name;
  int age;
  Person(this.name, this.age);

  // class variable or member, directly can call with the name of class
  static String? about;

  // instance methods, can only access instance variable & only available with 
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


// I have to add some info also to this files, because instance member can access static variables and methods.

// Instance method vs Static method

// Instance method can access the instance methods and instance variables directly.
// Instance method can access static variables and static methods directly.
// Static methods can access the static variables and static methods directly.
// Static methods can’t access instance methods and instance variables directly. 
// They must use reference to object. And static method can’t use this keyword as there is no instance for ‘this’ to refer to.


class Person {
  static const person = 'male';

  void display() {
    print(person);
    getMale();
  }

  static void getMale() {

    print(person);
  }
}

void main() {
  Person p = Person();
  p.display();
}
