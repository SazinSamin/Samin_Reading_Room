//Dynamic array through pointer.
//You can push as many as data you want.
//Data dynamically allocated from heap.
//When the previous size become full
//array size become double from 
//the previous size
//**There may have memory leak
//So, please if you can resolve the issue

#include <iostream>
using namespace std;

int *insert(int *array, int data, int *size, int *capacity){

        if (*size == *capacity){
                int *new_arr = (int *)malloc(((2 * (*capacity)) + 1) * sizeof(int));
                for (int i = 0; i < *size; i++){
                        new_arr[i] = array[i];
                }
                array = new_arr;
                *capacity = (*capacity * 2) + 1;
        }

        array[*size] = data;
        *size = *size + 1;
        return array;
}

int main(){

        int array[2];
        int length = 0;
        int size = 0;
        int *ptr;
        
        for(int i=0; i<10; i++){
                ptr = insert(ptr, (i+100), &size, &length);
        }

        cout << "\nArray: \n";
        for (int i = 0; i < size; i++){
                cout << ptr[i] << " ";
        }
}
