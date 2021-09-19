#include<iostream>
#include<string>

int main(){
        const int MAX_AGE = 90;
        int* a = new int;
        *a = 2;
        // we take the address of MAX_AGE to pointer a,
        a = (int*)&MAX_AGE;
        // change the content of a 200
        *a = 200;

        // now pointer a and MAX_AGE memory address are same
        std::cout << a << std::endl;
        std::cout << &MAX_AGE << std::endl;

        // But the result not same,
        // *a hold value 200, but MAX_AGE still has value 90.
        // debugger also show MAX_AGE as 200,
        // but MAX_AGE in the console print as 90.
        std::cout << *a << std::endl;
        std::cout << MAX_AGE << std::endl;
        
        int x = 10;
}
