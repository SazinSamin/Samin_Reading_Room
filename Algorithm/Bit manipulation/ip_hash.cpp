//Every ip address is 4 bytes (32 bits). Has 4 sections, each section isolates by "."(dot)
//Each section has 1 byte(8 bits) which range from 0-255.
//Here in the code first we take each section decimal value. 
//shifted that corresponding location, like 192 the first section has range from 24-32 bits.
//So, we shifter that 24 bits and get that corresponding decimal value.

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
