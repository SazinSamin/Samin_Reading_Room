#include<iostream>
using namespace std;

void InsertionSort(int array[], int n){
        int p, ind, i, j;
        for(i=1; i<n; i++){
                p  = array[i];

                for(j=i-1; j>=0; j--){
                        if(array[j] > p){
                                array[j+1] = array[j];
                        }else{
                                break;
                        }
                }
                array[j+1] = p;
        }
}


int main(){
        int array[] = {1, 2, 6, 7, 3, 4, 8, 0};
        int length = sizeof(array) / sizeof(array[0]);
        InsertionSort(array, length);
        cout << "\nSorted array: ";
        for (int i = 0; i < length; i++){
                cout << array[i] << " ";
        }
}
