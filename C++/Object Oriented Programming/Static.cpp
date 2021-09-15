// https://www.geeksforgeeks.org/static-keyword-cpp/
// https://www.youtube.com/watch?v=1QTZeeDL0bc

/* A static method cannot access a class’s instance variables and instance methods, 
because a static method can be called even when no objects of the class have been instantiated. 
For the same reason, the this reference cannot be used in a static method. The this reference must refer to
a specific object of the class, and when a static method is called, there might not be any objects of its class in memory.
*/









#include<iostream>
using namespace std;

class Player{
        private:
                // static private variable.
                static int st_x;
        public:
                // static public variable
                static int y;

        // static public method.
        static int getValue(){
                return st_x + y;
        }
};

// Initialization of static variable.
// you can't initialize static variable inside the class directly
// You have to initialize them by scope resulation.
int Player::st_x = 30;
int Player::y = 10;

int main(){

        // can be directly accessed by Class name with scope resulation.
        cout << Player::getValue();
        cout << Player::y;
}
