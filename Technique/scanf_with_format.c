#include<iostream>
using namespace std;

int main(){
        int a, b, c, d;
        
        //scanf can take as format you like to take input. 
        //In this code we take input of a ip address like 192.168.0.1
        //The section of the ip seperated by "."(dot). 
        //So scanf will ignore that 
        //And each integer value to it's corresponding variable.
  
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        cout<<a<<endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
}
