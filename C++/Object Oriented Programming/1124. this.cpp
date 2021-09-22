// https://www.youtube.com/watch?v=Z_hPJ_EhceI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=42
// https://www.geeksforgeeks.org/this-pointer-in-c/
// https://www.geeksforgeeks.org/g-fact-77/


// "this"  actually a pointer to that class, it is only avaiable inside the class,
// by using "this" we can access to class variable & methods inside the class.

#include<iostream>
using namespace std;

class Person{
        private:
                string name;
                int age;
        public:
                Person(string name, int age){
                        // accessesing class variable name & age and method display() using this pointer.
                        this->name = name;
                        this->age = age;
                        this->display();
                }

                void display(){
                        cout << "Name: " << this->name << " Age: " << this->age << endl;
                }
};

int main(){
        Person p1("Sazin", 24);
}
