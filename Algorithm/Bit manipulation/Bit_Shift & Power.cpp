//Bitwise shift of a number & multiply the number by 2 are same
// (23 << 1)	=   46
//(23 * 2) 	=   46

#include<iostream>
#include<math.h>
using namespace std;
//see this code result below.
int main(){
        int x = 23;
        int y;
        int z = x;

        for(int i=0; i<5; i++){
                //Shifting the value by i.
                y = x << i;
                cout<<y<<" ";
                cout << z;
                //Multiply the value every time by 2.
                z = z * 2;
               cout<<endl;
        }
}


//Result: 
//23 23
//46 46
//92 92
//184 184
//368 368
