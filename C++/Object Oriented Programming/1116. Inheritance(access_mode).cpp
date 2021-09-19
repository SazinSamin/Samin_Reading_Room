// https://www.geeksforgeeks.org/inheritance-in-c/

#include<iostream>
using namespace std;

class Animal{
        // private data & method are only avaiable to this class.
        private:
                int weight;
                void AnimalWeight(){
                        cout << "Weight approximately: " << weight << endl;
                }
        
        // protected member avaiable in this class & it's sub class.
        protected:
                string name;
                string eyeColor;

        void eye(){
                cout << "EyeColor: " << eyeColor << endl;
        }

        // avaiable to all
        public:
                int speed;
        
        void AnimalSpeed(){
                cout << "Speed: " << speed << endl;
        }
};

// public: public
// protected: protected
// private: can not accessable
class Dog : public Animal{
        public:
                void Color(string color){
                        // as eyeColor is protected so can be accessable from sub class.
                        eyeColor = color;
                        eye();
                }
};

// public: protected
// protected: protected
// private: can not accessable
class Shepard : protected Animal{
        public:
                void Name(string getName){
                        name = getName;
                        cout << "Name: " << name << endl;
                }
};

// public: private
// protected: private
// private: can not accessable
class GroupLeader: private Animal{

}

int main(){

        Dog d;
        // speed variable & AnimalSpeed method both are public in super class,
        // so, accessable from anywhere.
        d.speed = 30;
        d.AnimalSpeed();
        d.Color("Blue");


        Shepard s;
        s.Name("Lightining");
}
