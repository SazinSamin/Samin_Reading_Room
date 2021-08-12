#include<iostream>
#include<math.h>
using namespace std;

void CountingSort(int array[], int n, int r){
        int count[r+1];
        int output[n];
        
        for(int i=0; i<=r; i++){
                count[i] = 0;
        }

        for(int i=0; i<n; i++){
                count[array[i]]++;
        }


        for(int i=1; i<r; i++){
                count[i] += count[i-1];
        }


        for(int i=n-1; i>=0; i--){
                int x = array[i];
                int y = --count[x];
                output[y] = x;
                int test =1;
        }

        for(int i=0; i<n; i++){
                array[i] = output[i];
        }
}


int main(){

        int array[] = {4, 6, 3, 5, 4, 2, 3};

        int length = sizeof(array) / sizeof(array[0]);
        int range = 7;
        CountingSort(array, length, range);

        cout << "\nSorted array: \n";
        for (int i = 0; i < length; i++){
                cout << array[i] << " ";
        }
}
