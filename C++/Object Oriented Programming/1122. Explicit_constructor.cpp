// https://www.youtube.com/watch?v=Rr1NX1lH3oE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=40
#include<iostream>
        using namespace std;

class Player{
        private:
                string name;
                int height;
        public : 
                Player(int h) : name("Samin"), height(h){
                        cout << "Player name: " << name << " height: " << height  << endl;
                }

                // constructor mark as explicit can't do implicit casting.
                explicit Player(string name) : name(name), height(75){
                        cout << "Player name: " << name << " height: " << height << endl;
                }
};


int main(){
        // normal object instantiation
        Player p1(20);

        // but we can instantiate object below like this, 
        // what it actullay do the implitcit conversion, it take integer 20, and take it as parameter of Player class
        // constructor by implicitly converting to Player class  variable type.
        // remeber we can do it for only single constructor parameter.
        Player p2 = 20;

        // and so we can't do it, when we marks a constructor as explitcit, 
        //Player p3 = "Sazin";
        
        // then we have to explicitly do the casting procedure.
        Player p3 = (Player)"Sazin";
}
