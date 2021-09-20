// https://www.geeksforgeeks.org/const-keyword-in-cpp/
#include<iostream>
using namespace std;


// When a function is declared as const, it can be called on any type of object, const object as well 
// as non-const objects.

// Whenever an object is declared as const, it only can call the const function of the class. 
// also it needs to be initialized at the time of declaration. 
// However, the object initialization while declaring is possible only with the help of constructors.


class Const{
        public:
                Const(int x){
                        this->x = x;
                }

                int x;

                int getValue() const{
                        return x;
                }

                void setValue(int X){
                        x = X;
                }       


                // however if we declear a variable "mutable", then we can change
                // the variable value inside a const function.
                mutable int y;
                void display(int y) const{
                        y += 10;
                        cout << "x: " << x << " y: " << y << endl;
                }



};

int main(){
        Const c1(10);
        c1.setValue(11);
        cout << c1.getValue() << endl;
        
        const Const c2(12);
        cout << c2.getValue() << endl;

        c2.display(10);

}
