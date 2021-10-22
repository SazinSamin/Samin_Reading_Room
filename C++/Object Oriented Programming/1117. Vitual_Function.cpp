// Runtime Polymorphism
// https://www.youtube.com/watch?v=oIV2KchSyGQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=29
// https://www.geeksforgeeks.org/virtual-function-cpp/
// https://www.geeksforgeeks.org/multiple-inheritance-in-c/
// also know about polymophism or polymorphic class - > https://cplusplus.com/doc/tutorial/polymorphism/
// https://stackoverflow.com/questions/35422885/is-polymorphic-base-class-a-part-of-c-standard


#include<iostream>
using namespace std;

class BaseClass{
        public:
                int x;
                BaseClass(int x) : x(x){}

                // mark function as virtual for create and maintain V-Table by cpp compiler.
                virtual void print(){
                        cout << "BaseClass x: " << x << endl;
                }
};

class ChildClass : public BaseClass{
        public:
                int x;
                ChildClass(int x) : x(x) , BaseClass(x){}

                // mark as override, which is optional, if we mark as override it will tell us if the function name hasn't
                // defined in Base class
                void print() override{
                        cout << "ChildClass x: " << x << endl;
                }
};


int main(){
        // Suppose we have a function overriden in Child class, means that function in both Base class & Child class.
        // Now, when we instanace a object using Child class and that object type is on Base class, then the compiler will
        // called the Base class function, as it doesn't have idea about the Child class overriden function.

        BaseClass* c = new ChildClass(12);

        // So to avoid this situation, C++ use "virtual" function, when a function of a class mark as virtual CPP create and
        // maintain a V-Table, which have the information about the overriden function of Base class in Child classes.
        // Now, the compiler know about the all overriden function and act correctly. The procedure same for virtual destructor.

        c->print();
}
