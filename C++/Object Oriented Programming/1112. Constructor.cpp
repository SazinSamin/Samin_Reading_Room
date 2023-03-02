// https://www.youtube.com/watch?v=FXhALMsHwEY&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=25
// https://www.geeksforgeeks.org/constructors-c/

#include<iostream>
using namespace std;

class Player{

        private:
                // Private constructor, now can't instantiate a object from that class
                //Player(int x, int y){}
                //Player() = delete;

        public:
                int X;
                int Y;

        // Constructor declearation
        Player(int x, int y);
        // constructor definction can also be here.

        void display(){
                cout <<  X << " " << Y << endl;
        }
        
};

//constructor definition
Player::Player(int x, int y){
        X = x;
        Y = y;
}



int main(){
        Player p1(10, 20);
        p1.display();
        
        
        Player p2 = Player(30, 40);
        p2.display();
}
