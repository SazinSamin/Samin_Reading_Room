// https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/


#include<iostream>
using namespace std;

int main(){

        int a = 10;
        double b = static_cast<double>(a);
        cout << b <<  endl;
}
