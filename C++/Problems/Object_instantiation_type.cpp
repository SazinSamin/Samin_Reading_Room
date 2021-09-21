// if you don't familiar with how to intialize class variable in c++, see this below link:
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/C%2B%2B/Object%20Oriented%20Programming/1120.%20Member%20Initializer.cpp
// I don't get exact clear explaination of class object instantiation different type in inside main function
// like: p11 and p12, or p21 and p22.

// some exaplaition found in stackoverflow
// https://stackoverflow.com/questions/677632/different-methods-for-instantiating-an-object-in-c
// https://stackoverflow.com/questions/49802012/different-ways-of-initializing-an-object-in-c

#include<iostream>
using namespace std;

class Parent{
        private:
                int x;
                int y;
        public:

                // default construtor
                Parent() : x(10), y(20){}

                // parameterised constructor
                Parent(int x, int y) : x(x), y(y){}

                void display(){
                        cout << "x: " << x << " y: " << y << endl;
                }
};

int main(){

        Parent p11;
        p11.display();

        Parent p12 = Parent();
        p12.display();

        Parent p21(1, 2);
        p21.display();

        Parent p22 = Parent(10, 20);
        p22.display();
}
