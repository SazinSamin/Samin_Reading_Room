//Heap sort
//Min to Max

#include <iostream>
using namespace std;

//Swaping two elements
void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

//Heapfy the tree, correct the elements order.
void heapfy(int arr[], int l, int i){

        //Finding left sub-node number of the parent node.
        int left = (i * 2) + 1;
        //Finding right sub-node number of the parent node.
        int right = (i * 2) + 2;
        int largest = i;

        //Check if the left node number within the limit and priority of left node
        //is greater than the parent node. If so, select the largest node number
        //as left node number.
        if (left < l && arr[left] > arr[i]){
                largest = left;
        }
        
        //check for right sub-tree also with current largest node
        if (right < l && arr[right] > arr[largest]){
                largest = right;
        }
        
        //check the largest node is not the parent node
        //If largest node is greater than parent node than swap
        //two elements and heapify it's subtree until the leaf
        //touch.
        if (largest != i && arr[largest] > arr[i]){
                swap(&arr[largest], &arr[i]);
                heapfy(arr, l, largest);
        }
}

void heapSort(int arr[], int l){
        int size = l;
        
        //Build heap.
        //we run the for loop from half size because
        //The all leaf nodes has no left or right sub-tree
        //So, we don't need to heapify them.
        for (int i = (l / 2) - 1; i >= 0; i--){
                heapfy(arr, l, i);
        }

        //here we swap last element with the first element.
        //Get the max element from the root node and keep in
        //last position.
        //then heapify the current sub-tree for next Max value node.
        for (int i = l - 1; i >= 0; i--){
                swap(&arr[0], &arr[i]);
                heapfy(arr, i, 0);
        }
}

int main(){
        int heap[] = {1, 12, 9, 5, 6, 10};
        int length = sizeof(heap) / sizeof(heap[0]);

        heapSort(heap, length);

        for (int i = 0; i < length; i++){
                cout << heap[i] << " ";
        }
}
