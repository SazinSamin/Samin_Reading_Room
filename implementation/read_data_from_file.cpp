#include<iostream>
using namespace std;

int main(){
        freopen("file.txt", "r", stdin);
        int array[100];
        for(int i=0; i<100; i++){
                cin>>array[i];
        }

        for(int i=0; i<100; i++){
                cout<<array[i]<<" ";
        }
}
