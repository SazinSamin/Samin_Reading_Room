// https://medium.com/@shashankmohabia/bitwise-operators-facts-and-hacks-903ca516f28c

#include<iostream>
using namespace std;


int main() {

    // upperCase to lowerCase

    char upperA = 'A';
    char upperB = 'B';

    char lowerMask  = ' ';

    char lowerA = upperA | lowerMask;
    cout << lowerA << endl;
    char lowerB = upperB | lowerMask;
    cout << lowerB << endl;


    // lowerCase to upperCase

    char upperMask = '_';

    upperA = lowerA & upperMask;
    cout << upperA << endl;
    upperB = lowerB & upperMask;
    cout << upperB << endl;

}
