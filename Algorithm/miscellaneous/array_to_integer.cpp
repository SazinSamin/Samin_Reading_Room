#include<iostream>
using namespace std;

int main(){
        int array[] = {0,1,1,1,0,0};
        int x = 0;
        int n = 0;
        for(int i=0; i<7; i++){
                n = (n * 10)  + array[i];
        }

        cout<<n;
}
