//Min heap
//return minimum value element every time

#include<iostream>
#include<climits>
using namespace std;

#define MAX 200;
int MIN_VALUE = -9999999;
int capacity = 100;
int heap[100];
int heap_size = 0;

void MinHeapify(int);
int extractMin();

    int parent(int i){
        return (i - 1) / 2;
}
int left(int i){return (2 * i) + 1;}
int right(int i){ return (2 * i) + 2; }
int getMin(){return heap[0];}

void swap(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

void insertKey(int k){

        if(heap_size == capacity){
                cout<<"\nHeat is full";
                return;
        }

        heap_size++;
        int i = heap_size - 1;
        heap[i] = k;

        while(i != 0 && heap[parent(i)] > heap[i]){
                swap(&heap[parent(i)], &heap[i]);
                i = parent(i);
        }
}

void decreaseKey(int i, int new_val){

        heap[i] = new_val;
        while(i !=0 && heap[parent(i)] > heap[i]){
                swap(&heap[parent(i)], &heap[i]);
                i = parent(i);
        }
}

void deleteKey(int i){
        decreaseKey(i, INT_MIN);
        extractMin();
}


int extractMin(){

        if(heap_size == 0){
                return -9999999;
        }

        if(heap_size == 1){
                return heap[0];
        }

        int root = heap[0];
        heap[0] = heap[heap_size - 1];
        heap_size--;
        MinHeapify(0);
        return root;
}

void MinHeapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if(l < heap_size && heap[l]<heap[smallest]){
                smallest = l;
        }
        if(r <heap_size && heap[r] < heap[smallest]){
                smallest = r;
        }

        if(smallest != i){
                swap(&heap[smallest], &heap[i]);
                MinHeapify(smallest);
        }
}

int main(){

        insertKey(10);
        insertKey(12);
        insertKey(11);
        insertKey(3);

        cout<<"\nHeap array: ";
        for(int i=0; i<heap_size; i++){
                cout<<heap[i]<<" ";
        }

        cout<<"\nMin element: "<<extractMin();

        cout << "\nHeap array: ";
        for (int i = 0; i < heap_size; i++){
                cout << heap[i] << " ";
        }

        deleteKey(1);

        cout << "\nHeap array: ";
        for (int i = 0; i < heap_size; i++){
                cout << heap[i] << " ";
        }
}
