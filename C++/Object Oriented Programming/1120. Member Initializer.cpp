// To initialize the member variable or object of the Class member,
// we use member initializer list, this gives performance benefit over normal assignment of member variable inside
//  the constructor.

// These links also give clear explaintion, with where we must use this initializer list
// https://www.studytonight.com/cpp/initializer-list-in-cpp.php
// https://www.youtube.com/watch?v=1nfuYMXjZsA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=36
// https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/



// when we initialize class variable in constructor, we should always maintain the initialization order
// with the declearation order of class variable,
// like here in Parent class we have two class variable x, y, so we first should initialize x, then y.


#include<iostream>
using namespace std;

class Parent{
        private:
                int x;
                int y;
        
        public:
                                      // member initializer
               Parent(int x, int y) : x(x), y(y){}

        void display(){
                cout << "value x: " << x << " y: " << y << endl;
        } 
};

int main(){
        Parent p1(10, 20);
        p1.display();
}
