//Selection sort
//Worst case complexity : O(n 2)
//Best case complexity : O(n 2)
//Average case complexity : O(n 2)
//Worst case space complexity : O(1) auxiliary

#include<iostream>
using namespace std;

void selectionSort(int array[], int n){
        int min;
        for (int i = 0; i < n - 1; i++){
                min = i;
                for (int j = i; j < n; j++){
                        if (array[j] < array[min]){
                                min = j;
                        }
                }

                int temp = array[i];
                array[i] = array[min];
                array[min] = temp;
        }
}

int main(){
        int array[5] =  {2,4,5,56,6};
        int n = sizeof(array) / sizeof(array[0]);
        
        selectionSort(array, n);

        for(int i=0; i<n; i++){
                cout<<array[i]<<" ";
        }
}
