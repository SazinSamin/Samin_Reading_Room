// https://www.youtube.com/watch?v=jELbKhGkEi0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=68
// https://www.geeksforgeeks.org/virtual-destructor/
// also know about virtual function -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/C%2B%2B/Object%20Oriented%20Programming/1117.%20Vitual_Function.cpp




#include<iostream>
using namespace std;

class Base{
        public:
                Base(){ cout << "Base constructor called" << endl; }
                // mark base class destructor as as virtual to call all it's subclass desctructor.
                virtual ~Base() { cout << "Base destructor called" << endl; }
};

class Derived: public Base{
        private:
                int* a;
        public:
                Derived() {
                        // if we allocate heap memory in constructor.
                        a = new int;
                        *a = 5;
                         cout << "Derived constructor called" << endl; }
                ~Derived() {
                        // then we can delete the memory through destructor, that's why the destructor must be called.
                        delete a;
                        cout << "Derived destructor called\n" << endl; }
};


int main(){
        // We instantiate a child class object through base class.
        Base* b = new Derived();
        // Now if we destructed that class instance, only the destructor of the base class will called.
        // destructor of child is not called here, but we construct the child class above and put into the base class.
        // So, this leads to memory leak and undefined behaviour.
        // That's why we have to mark the base class destructor as virtual, then CPP will call the child class destructor also
        delete b;
}
