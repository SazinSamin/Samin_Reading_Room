#include<iostream>
using namespace std;

void swap(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
}


void heapfy(int arr[], int l, int i){

        int left = (i*2) + 1;
        int right = (i*2) + 2;
        int largest = i;

        if(left < l && arr[left] < arr[i]){
                largest = left;
        }

        if(right < l && arr[right] < arr[largest]){
                largest = right;
        }

        if(largest !=i && arr[largest] < arr[i]){
                swap(&arr[largest], &arr[i]);
                heapfy(arr, l, largest);
        }       
}


void heapSort(int arr[], int l){
        int size = l;
        for(int i = (l/2) -1; i>=0; i--){
                heapfy(arr, l, i);
        }

        
        for(int i = l-1; i>=0; i--){
                swap(&arr[0], &arr[i]);
                heapfy(arr, i, 0);
        }


}


int main(){
        int heap[] = {1, 12, 9, 5, 6 ,10};
        int length = sizeof(heap) / sizeof(heap[0]);

        heapSort(heap, length);

        for(int i=0; i<length; i++){
                cout<<heap[i]<<" ";
        }


}