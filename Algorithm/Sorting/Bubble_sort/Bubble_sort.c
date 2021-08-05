//Bubble sort
//Worst case complexity : O(n^2 )
//Best case complexity (Improved version) : O(n)
//Average case complexity (Basic version) : O(n^2 )
//Worst case space complexity : O(1) auxiliary

#include<iostream>
using namespace std;

void selectionSort(int array[], int n){
        int temp;
        for(int i=0; i<n-1; i++){
                for(int j=0; j<n-i-1; j++){
                        if(array[j] > array[j+1]){
                                temp = array[j];
                                array[j] = array[j+1];
                                array[j+1] = temp;
                        }
                }
        }
}

int main(){
        int array[] =  {2,4,5,56,6,3,57,7,7,4};
        int n = sizeof(array) / sizeof(array[0]);
        
        selectionSort(array, n);

        for(int i=0; i<n; i++){
                cout<<array[i]<<" ";
        }
}
