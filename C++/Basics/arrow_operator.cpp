//  the arrow "->" operator use to access the class or struct member when allocating memory
// in the heap, because heap allocation happens using pointer. So, the arrow operator will
// dereference that pointer, access that class and it's member

#include<iostream>
using namespace std;

class Person{
        string name;
        int age;
        public:
                Person(string n, int a) : name(n), age(a) {}
                void display(){
                        cout << "Name: " << name << " Age: " << age << endl;
                }
};

class GetPerson{
        Person* person;
        public:
                GetPerson(Person* per) : person(per) {};
                ~GetPerson() { delete person; }

                // operator overloading of arrow, for return the person instance, we can access
                // Person class member using GetPerson now.
                Person* operator -> (){
                        return person;
                }
};


int main(){

        // memory allocated in heap
        Person* p1 = new Person("Samin", 23);
        // accessing using arrow operator
        p1->display();

        GetPerson g1 = new Person("Sazin", 24);
        g1->display();
}
