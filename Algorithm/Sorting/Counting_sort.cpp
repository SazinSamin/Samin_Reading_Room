#include <iostream>
using namespace std;

void CountingSort(int array[], int n, int range){
        int count[range+1];
        int output[n];


        for(int i=0; i<=range; i++){
                count[i] = 0;
        }

        for (int i = 0; i < n; i++){
                count[array[i]]++;
        }


        for (int i = 1; i < range; i++){
                //count[i] = count[i] + count[i - 1];
                count[i] += count[i-1]; 
        }

        for (int i = n - 1; i >= 0; i--){
                //int x = --count[array[i]];
                //int y = array[i];
                output[--count[array[i]]] = array[i];
        }

        for(int i=0; i<n; i++){
                array[i] =  output[i];
        }

}

int main(){
        int array[] = {1, 2, 4, 3, 0, 2, 1, 7, 1, 4, 3, 0};
        int range = 7;


        int length = sizeof(array) / sizeof(array[0]);
        CountingSort(array, length, range);

        cout << "\nSorted array: ";
        for (int i = 0; i < length; i++){
                cout << array[i] << " ";
        }
}
