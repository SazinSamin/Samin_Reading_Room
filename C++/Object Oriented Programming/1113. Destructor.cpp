// https://www.geeksforgeeks.org/destructors-c/

#include<iostream>
using namespace std;

class Circle{
        int x;
        int y;
        int *p;

        public:
                Circle(int X, int Y){
                        cout << "Object created" << endl;
                        x = X;
                        y = Y;
                        p = new int;
                }

                // Destructor
                ~Circle(){
                        free(p);
                        cout << "Memory freed from the heap" << endl;
                        cout << "Object destroyed" << endl;
                }

                void display(){
                        cout << x << " " << y << endl;
                }
};


void function(){
        Circle c(10, 20);
        c.display();
        // We can call destructor manually, but be sure if destructor free any memory
        // it will try to free that twitch, which throw error.
        c.~Circle();
}


int main(){
        function();
}
