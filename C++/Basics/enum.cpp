// https://www.youtube.com/watch?v=x55jfOd5PEE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=24
// https://www.geeksforgeeks.org/enumerated-types-or-enums-in-c/

#include<iostream>
using namespace std;

// enum only take integer type
// default start from 0
// we can also define integer type
// enum Gender:char{male, female};

enum Gender{male, female};

int main(){

        // If we set datatype as enum name, it will just take the value defined inside the enum 
        Gender x = male;
        Gender y = female;
        cout << x << endl;
        cout << y << endl;
}
