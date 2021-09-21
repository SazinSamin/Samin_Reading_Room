// https://www.youtube.com/watch?v=Ks97R1knQDY&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=38


#include<iostream>
using namespace std;

class Person{
        private:
                int x, y;
        public:
                Person(int x, int y) : x(x), y(y){}
                void display(){
                        cout << "x: " << x << " y: " << y << endl;
                }
};


int main(){
        // allocated or instantiate in stack
        Person p1 = Person(10, 20);
        p1.display();

        // allocated or instantiate in heap
        Person* p2 = new Person(10, 20);
        p2->display();

        delete p2;
}
