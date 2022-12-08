// First know about aliasing
// https://www.geeksforgeeks.org/strict-aliasing-rule-in-c-with-examples/
// https://en.wikipedia.org/wiki/Aliasing_(computing)
// https://stackoverflow.com/questions/98650/what-is-the-strict-aliasing-rule



// Then know about type punning
// https://www.youtube.com/watch?v=8egZ_5GA9Bc&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=66
// https://stackoverflow.com/questions/44137442/what-is-type-punning-what-is-the-purpose-of-itwhat-happens-if-i-use-it-or-not


// strict aliasing rule in my github code
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/C++/VoltStar/strict_aliasing_rule.cpp




#include<iostream>
using namespace std;

struct Complex{
        int x;
        int y;
};

int main(){

        Complex complex = {3, 5};
        // we can put the beginning memory address of structure Complex to a int variable which is known as type punning
        int* ref = (int*)&complex;

        // as the integer hold 4 bytes of memory address, and the data of structure element lies on countiguous memory
        // location. Where our Complex structure has 2 integer variables. So, we can access those variable like an array
        // by that integer pointer.
        cout << *ref << " " << *(ref + 1) << endl; 

        // we also get same result of avobe line by below line.
        // because the two code alise of each other.
        cout << ref[0] << " " << ref[1] << endl;
}
