//Find out which numbers from a given range not present in the given array.

#include<iostream>
using namespace std;

int main(){
        int n = 50;
        int range = 100;
        int array[n] = {89, 85, 59, 63, 57, 12, 64, 62, 29, 38, 47, 93, 36, 44, 63, 23, 39, 85, 64, 27, 17, 97, 24, 96, 83, 72, 75, 76, 11, 14, 82, 52, 99, 94, 67, 57, 58, 32, 19, 87, 70, 18, 80, 59, 15, 96, 82, 6, 81, 98};
        freopen("file.txt", "r", stdin);
        for(int i=0; i<n; i++){
                cin>>array[i];
        }

        int flag = 0;
        for(int i=0; i<range; i++){
                flag = 0;
                for(int j=0; j<n; j++){
                        if(i == array[j]){
                                flag = 1;
                                break;
                        }
                }
                if(flag == 0){
                        cout<<i<<" ";
                }
        }
}
