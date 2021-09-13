#include<iostream>
using namespace std;

int main(){
  
  
        
  
        int a = 100100100;
        int r1 = 1 << 3;
        int r2 = 2 << 6;
        int r3 = 3 << 9;

  
        // as we shift r1 3 bits, so it will be 100, as out a variable has also 1 at same position so it return true.

        if(a && r1)
                cout<<"True";
        else    
                cout<<"False";
}
