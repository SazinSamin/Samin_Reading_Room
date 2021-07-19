//Max heap
//Keep elements from higher to lower
//Return max value element every time

#include<iostream>
#include<climits>
using namespace std;
#define MAX 100

int heap_arr[MAX];
int heap_size = 0;

//return Parent of certain element
int parent(int i) { return (i - 1) / 2; }
//return Left Child of certain element
int left(int i) { return (i * 2) + 1;}
//return Right Child of certain element
int right(int i) { return (i * 2) + 2;}
//Correct the heap order
void MaxHeapify(int i);


    //Swap two elements/keys through pointer
void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

//Insert element to the heap
void insert(int data){
        if(heap_size == 0){
                heap_arr[heap_size++] = data;
                return;
        }

        
        int i = heap_size;
        heap_arr[heap_size++] = data;

        while(i != 0 && heap_arr[parent(i)] < heap_arr[i]){
                swap(&heap_arr[parent(i)], &heap_arr[i]);
                i = parent(i);
        }
}

//Return the top or max elements of the heap.
int ExtractMax(){
        if(heap_size == 0){
                cout<<"\nArray is empty";
        }

        if(heap_size == 1){
                heap_size--;
                return heap_arr[0];
        }

        int root = heap_arr[0];
        int i = heap_size - 1;
        heap_arr[0] = heap_arr[i];
        heap_size--;
        //cout<<"\nHeap size: "<<heap_size<<"\n";
        MaxHeapify(0);
        return root;
}

//Correct the heap order
void MaxHeapify(int i){

        int l = left(i);
        int r = right(i);
        int largest  = i;

        if(l<heap_size && heap_arr[l] > heap_arr[i]){
                largest = l;
        }

        if (r < heap_size && heap_arr[r] > heap_arr[largest]){
                largest = r;
        }

        while(i <heap_size && heap_arr[largest] > heap_arr[i]){
                swap(&heap_arr[largest], &heap_arr[i]);
                MaxHeapify(largest);
        }
}

//Increase any element priority
void IncreaseKey(int i, int new_val){
        heap_arr[i] = new_val;

        while(i !=0 && heap_arr[parent(i)] < heap_arr[i]){
                swap(&heap_arr[parent(i)], &heap_arr[i]);
                i = parent(i);
        }
}

//Delete a certain element from heap
void DeleteKey(int i){
        IncreaseKey(i, INT_MAX);
        ExtractMax();
}

//Traverse the heap
void traverseHeap(){
        cout<<"\nHeap: ";
        for(int i=0; i<heap_size; i++){
                cout<<heap_arr[i]<<" ";
        }
}



int main(){
        insert(12);
        insert(1);
        insert(44);
        insert(13);
        insert(50);
        insert(4);

        traverseHeap();

        IncreaseKey(1, 61);
        traverseHeap();

        DeleteKey(2);
        traverseHeap();

        cout<< "\nMax element: " << ExtractMax();
}
