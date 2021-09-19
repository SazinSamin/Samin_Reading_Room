// https://www.geeksforgeeks.org/static-keyword-cpp/
// https://www.youtube.com/watch?v=1QTZeeDL0bc
//  same in other programming language like Dart -> https://docs.google.com/document/d/1tQRqFEWMXu675f-4fGTCZwy8n14ePPcquYPPpYqBDAI/edit
// Static variable also have other functionality, see example -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/C++/functionality/static_variable.cpp


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
        
        
                // also in class intialization of a static variable always be const, because the value should be always same
                // there will be only one copy of the value for that class
                // compiler also can do some optimization in this case.
                // ***need more clear explaination
                const static int st_cnt_x = 10;

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
