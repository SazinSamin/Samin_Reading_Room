//Difference between logical & arithmetic shift -> 
// https://stackoverflow.com/questions/44694957/the-difference-between-logical-shift-right-arithmetic-shift-right-and-rotate-r
//Logical shift correspond to (left-shift) multiplication by 2, (right-shift) integer division by 2



//Every ip address is 4 bytes (32 bits). Has 4 sections, each section isolates by "."(dot)
//Each section has 1 byte(8 bits) which range from 0-255.
//Here in the code we take each section decimal value. 
//Consider a ip address 192.168.0.1
//So now the most left section 192 which the first 8 bits.
//And this bit is ahead of another 24 bit, so we shit it 24 for bit and get the corresponding decimal value.
//We do this for all other value, and add them together and get the hash value...

//         192      168        0         1
//      11000000  10101000  00000000  00000001



#include<iostream>
using namespace std;

unsigned int getHash(int a, int b, int c, int d){
        unsigned int x = a << 24;
        unsigned int y = b << 16;
        unsigned int z = c << 8;

        return x + y + z + d;
}

int main(){
        int a, b, c, d;
        
        //take the ip address format like this -> 192.168.0.1
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        cout<<getHash(a, b, c, d);
}
