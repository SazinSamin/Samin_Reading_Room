// https://www.w3schools.com/cpp/cpp_encapsulation.asp
// getter & setter use for data hiding and data sanitation

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

                // getter
                int getAge() {
                        return this->age;
                }

                // setter
                void setAge(int age) {
                        age > 120 ? this->age = 0 : this->age = age;
                }
};

int main() {
        Person p1 =  Person("Hasan", 45);
        p1.setAge(30);
        cout << p1.getAge();
}
