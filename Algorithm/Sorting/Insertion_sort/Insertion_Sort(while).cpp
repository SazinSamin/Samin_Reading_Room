#include<iostream>
using namespace std;

void InsertionSort(int array[], int n){
        int p, idx, i, j;
        for(i=1; i<n; i++){
                p = array[i];
                idx = i;
                while(array[i-1] > p && i>=1){
                        array[i] = array[i-1];
                        i--;
                }
                array[i] = p;
        }
}


int main(){
        int array[] = {7, 3, 1, 4, 6 ,7, 13, 11, 17, 2};
        int length = sizeof(array) / sizeof(array[0]);
        InsertionSort(array, length);
        cout << "\nSorted array: ";
        for (int i = 0; i < length; i++){
                cout << array[i] << " ";
        }
}
