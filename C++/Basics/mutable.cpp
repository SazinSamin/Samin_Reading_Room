// as constant object can only call constant method of class
// so, to somehow change any variable inside the const method, we can
// marks that variable as mutable.

#include<iostream>
using namespace std;

class Player{
        private:
                int height;
                mutable int weight;
        public:
                Player(int x, int y){
                        height = x;
                        weight = y;
                }

                void display() const{
                        if(!weight){
                                weight = 60;
                        }
                        cout << "height: " << height << " weight: " << weight << endl;
                }
};


int main(){
        const Player p1(75, 0);
        p1.display();
}
