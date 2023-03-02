// https://www.youtube.com/watch?v=mS9755gF66w&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=41

#include<iostream>
using namespace std;

class Complex{
        private:
                int real, imag;
        public:
                Complex(int r, int i) : real(r), imag(i){}
                void display() { cout << real << " + i" << imag << endl; }

                // here we overload the + operator, by this we can now add two instance of same class.
                Complex operator + (Complex other){
                        
                        return Complex( real + other.real, imag + other.imag);
                }
                
             // by overload the == operator, we can compare two class.   
            bool operator == (Complex other){
                    return (real == other.real && imag == other.imag);
            }

};

int main(){

        Complex c1(10, 20), c2(11, 22);
        // here we add two instance by operator overloading ... 
        Complex c3 = c1 + c2;
        c3.display();


        Complex c4(10, 20);
        // here we compare two instance by operator overloading ...
        cout << (c1 == c4);
}
