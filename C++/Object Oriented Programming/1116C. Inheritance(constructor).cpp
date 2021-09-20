// ** This below lines are definition of DartLang. C++ finding...
// Because when we inherit, the child class inherits functions and variables, or properties of the parent class.
// It cannot inherit the parent class constructor.
// Constructors are not inherited by the child class.
// A programmer must explicitly define a named constructor in a child class.
// You can send your information to Parent Class by using the Child Class constructor 
// through the scope resulation and call the super class.




#include<iostream>
using namespace std;

class Parent{
        private:
                int x;
        public:
                Parent(int x){
                        this->x = x;
                        cout << "Parent X: " << this->x << endl;
                }
};


class Child1 : public Parent{
        private:
                int y;
        public:
                // When we inherit a super class from sub class, we have to also manually call the super class constructor,
                // as well as pass the value to that. 
                Child1(int x) : Parent(x+ 10){
                        y = x;
                        cout << "Y: " << y << endl; 
                }
};

int main(){
        Child1 c(12);
}
