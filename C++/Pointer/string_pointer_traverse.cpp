#include<iostream>
using namespace std;


// as this in C or C++, when we pass an array(here is "char" array),
// the array decays to pointer, means instead of copying the whole array & it's element, 
// it just copy the it's first address of the array.
// which is a pointer.
// so, we decode that pointer, and can do pointer arithmatic to traverse tha char array here.
// see Denis Riche book for that.


void print(char *s){
        int i = 0;
        while(*s != '\0'){
                cout<<*s++;
        }
}

int main(){
        char s[] = "Sazin Reshed Samin";
        print(s);
}
