//https://www.youtube.com/watch?v=COk73cpQbFQ&list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U&index=7&t=6s

//Worst case Complexity: O(n^2)
//Best case Complexity: O(nlogn)
//Average case Complexity: O(nlogn)
//Worst case space Complexity: O(1)

//When we finish off the process of partitioning, then the pivot element
//will be in the correct position, because the all the element smaller than it
//will be in the left & rest off the other in the right, so it must be in it position.



#include<iostream>
using namespace std;

void swap(int* a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

int Partition(int array[], int start, int end){
       int pivot = array[end];
       int index = start; 

        for(int i=start; i<end; i++){
                if(array[i] <= pivot){
                        swap(&array[i], &array[index]);
                        index = index+1;
                }
        }
        swap(&array[index], &array[end]);
        return index;
}

void QuickSort(int array[], int start, int end){
        if(start < end){
                int pivot = Partition(array, start, end);        
                QuickSort(array, start, pivot-1);
                QuickSort(array, pivot, end);
        }
}

int main(){
        int array[] = {7, 2, 1, 6, 8, 5, 3, 4};
        int length = sizeof(array) / sizeof(array[0]);
        QuickSort(array, 0, length-1);

        cout<<"\nSorted array: ";
        for(int i=0; i<length; i++){
                cout<<array[i]<<" ";
        }
}
