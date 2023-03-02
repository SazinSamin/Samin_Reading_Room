// https://www.programiz.com/cpp-programming/function-overloading

#include<iostream>
using namespace std;

class Person {
        private:
                string name;
                int age;
        public:
                Person(string name, int age) {
                        this->name = name;
                        this->age = age;
                }

                void display() {
                        cout << "Same name No parameter" << endl;
                }
                void display(int param) {
                        cout << "Same name One parameter " << endl;
                } 
                void display(int param1, int param2) {
                        cout << "Same name two parameters"<< endl;
                }
                void display(string param) {
                        cout << "Same name different type" << endl;
                }
};

int main () {
        Person p1 = Person("Ahmed", 23);
        p1.display();
        p1.display(1);
        p1.display(1, 2);
        p1.display("test");
}
