// stack based automatic heap allocation.
// as allocating memmory in the heap, we have to free that memory explicitly. 
// we can automate this things by stack based heap allocation.

#include<iostream>
using namespace std;

class Person{
        private:
                string name;
                int age;
        public:
                Person(string n, int a) : name(n), age(a){}
                void display() { cout << "Name: " << name << " Age: " << age << endl;}
};


class GetPerson{
        private:
                // pointer to Person class
                Person* p1_ptr;
        public:
                // Get the heap allocated memory first address as constructor argument. 
                // put that in the class variable p1_ptr;
                GetPerson(Person* p) : p1_ptr(p){
                        p1_ptr->display();
                }

                // so, when this GetPerson stack based class pop out from the stack, that heap allocated memory also
                // free with the help of destructor of the GetPerson.
                ~GetPerson() { 
                        delete p1_ptr;
                }
};


int main(){

        // instantiate Person instance in heap, send to the GetPerson class as argument,
        // things getting work due to implicit conversion.
        GetPerson g1 = new Person("Sazin", 24);
}
