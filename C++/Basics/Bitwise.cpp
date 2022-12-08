// https://www.youtube.com/watch?v=KXwRt7og0gI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=96
// https://www.youtube.com/watch?v=HoQhw6_1NAA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=97
// https://www.programiz.com/cpp-programming/bitwise-operators


#include<iostream>
#include<bitset>
using namespace std;

int main(){


        int a1 = 0b010;
        int b1 = 0b001;

        // bitwise and( & ) which return 1 if both bits are 1;
        // the bitset methods print bitwise value in console.
        cout << bitset<3>(a1 & b1) << endl;
        // bitwise or( | ) which return 1 if any of bits is 1;
        cout << bitset<3>(a1 | b1) << endl;

        // bit shift, specify how many shifting will happen.
        // shifted vacant place will replace by zero( 0 ).
        int x = 0b001;
        int y = x;
        y <<= 3;

        cout << bitset<6>(y) << endl;

        // bitwise not ( ~ ) operator flip all the bits, like if there is 0 it will make 1, if 1 then make 0.
        int s1 = 0b010101;
        cout << bitset<6>(~s1) << endl;

        // the xor( ^ ) operator will result 0 if both bits are same, otherwise it will result 1.
        int w1 = 0b1;
        int w2 = 0b1;
        cout << bitset<1>(w1 ^ w2) << endl;

}
