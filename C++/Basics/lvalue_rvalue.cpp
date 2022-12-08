// https://www.youtube.com/watch?v=fbYknr-HPYE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=86
// https://www.geeksforgeeks.org/lvalue-and-rvalue-in-c-language/

#include<iostream>
using namespace std;

int main(){

       // here a is lvalue which can appear in both left & right side
       // 10 is rvalue which only can appear in right side 
       int a;
       a = 10;
       int b = a;

       cout << a << " " << b << endl; 
}
