// https://www.geeksforgeeks.org/access-modifiers-in-c/


#include<iostream>
using namespace std;

class Player{
        // public visible to all
        public:
                string name;
        // protected visible to this class and it's subclass.
        protected:
                double height;
                int weight;

        void ViewDetails(){
                cout << "Height: " << height << " Weight: " << weight << endl;
        }
        
        // private only visible to this class
        private:
                string address;
        
        void viewAddress(){
                cout << "Address: " << address << endl;
        }
        

        public:
                void ViewName(){
                        cout << "Name: " << name << endl;
                }
};


class Details : public Player{
        public:
        void playerDetails(int h, int w){
                height = h;
                weight = w;
                ViewDetails();
        }
};

int main(){

        Details d;
        d.name = "Sazin";
        d.ViewName();
        d.playerDetails(75, 70);
}
