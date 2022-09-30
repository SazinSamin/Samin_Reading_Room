// https://www.programiz.com/cpp-programming/constructor-overloading

#include<iostream>
using namespace std;

class Person {
        private:
                string name;
                int age;
        public:
                Person() {
                        this->name = "Undefined";
                        this->age = 0;
                }
                Person(string name, int age) {
                        this->name = name;
                        this->age = age;
                }
                Person(string name) {
                        this->name = name;
                        this->age = 0;
                }
                void display() {
                        cout << "Name: " << this->name << " Age: " << this->age << endl;
                }
};

int main () {
        Person p1 = Person();
        p1.display();
        Person p2 = Person("Ahemd");
        p2.display();
        Person p3 = Person("Hasan", 23);
        p3.display();
}
