// I found templete & Generics are same concept in C++
// Generics implment using templete
// https://www.geeksforgeeks.org/templates-cpp/
// https://www.geeksforgeeks.org/generics-in-c/
// https://www.youtube.com/watch?v=I-hZkUa9mIs&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=53



#include<iostream>
using namespace std;



// temeplete class
// define templete
// we can also take multiple arguments in templete
template<typename T, typename U>

class Complex{
        private:
                T real;
                U imag;
        public:
                Complex(T real, U imag) : real(real), imag(imag) {}
  
                // operator overloading
                bool operator > (Complex other){
                        return (real > other.real) ? true : false;
                }

                void display(){
                        cout << "Real: " << real << " Image: " << imag;
                }
};


// templete function
// define templete
template<typename T>
T compare(T o1, T o2){
        return (o1 > o2) ? o1 : o2;
}


int main(){
        Complex<int, double> c1(10, 20.33);
        Complex<int, double> c2(20, 30.11);
        
        cout << compare<int>(2, 3) << endl;
        cout << compare<double>(3.55, 1.33) << endl;
        Complex<int, double> c3 = compare<Complex<int, double>>(c1, c2);
        c3.display();
}
