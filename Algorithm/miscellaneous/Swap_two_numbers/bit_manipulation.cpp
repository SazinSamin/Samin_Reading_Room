// https://medium.com/@shashankmohabia/bitwise-operators-facts-and-hacks-903ca516f28c

#include<iostream>
using namespace std;


int main() {

    int a = 10;
    int b = 20;


    a ^= b; 
    b ^= a; 
    a ^= b;
}
