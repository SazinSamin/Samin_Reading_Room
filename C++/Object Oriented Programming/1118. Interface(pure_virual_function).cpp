// https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
// https://stackoverflow.com/questions/12854778/abstract-class-vs-interface-in-c


#include<iostream>
using namespace std;


// In C++, interface or abstruction achieve using pure virtual function.
// we can get pure virtual function by make a method virtual and place no implementation also set to zero

class Base{
        public:
                virtual void ShowName() = 0;
};

// Subclass have to give implementation of abstruct class unimplemeted method
// nor it will also be a abstruct class.
class Child : public Base{
        public:
                string name;

                void getName(string Name){
                       this->name = Name;
                }

                void ShowName() override{
                        cout << "Name: " << name << endl;
                }
};

int main(){
        Child c;
        c.getName("Sazin");
        c.ShowName();
}
