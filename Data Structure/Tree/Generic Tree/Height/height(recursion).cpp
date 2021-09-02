#include<iostream>
#include<vector>
using namespace std;

int Height(int array[], int pos){
        if(pos == -1){
                return 1;
        }
        return 1 + Height(array, array[pos]);
}


int main(){
        int array[] = {-1, 0, 0, 0, 3, 1, 1, 2};
        int n = sizeof(array) / sizeof(array[0]);
        int max = -1;
        int result;
        for(int i=0; i<n; i++){
                result = Height(array, array[i]);
                if(result > max){
                        max = result;
                }
        }
        cout<<max;
}
