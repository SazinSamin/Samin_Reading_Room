//Counting sort
//https://www.youtube.com/watch?v=uvOe510RmWc -> good explaination in bangla.

#include <iostream>
using namespace std;

void CountingSort(int array[], int n, int range){
        
        //An array which store individul elements count. means how many 0,1 or any character are there.
        int count[range+1];
        
        //An array which hold the sorted array.
        int output[n];

        
        //set all elements count as 0 at intial level.
        for(int i=0; i<=range; i++){
                count[i] = 0;
        }
        

        //count the element occur in the given array & increase the amount in the array corresponding to that element.
        for (int i = 0; i < n; i++){
                count[array[i]]++;
        }
        
 
        //count first element with the next element & keep the value in the next element location.
        //do this until the array have finished.
        for (int i = 1; i < range; i++){
                //count[i] = count[i] + count[i - 1];
                count[i] += count[i-1]; 
        }

        
        //This loop will go from last to first element,
        //get the value contain from the position, go to value position in count array,
        //decrease it by 1, get the value from there now, and go to output variable that position.
        //And put the main array value there
        
        for (int i = n - 1; i >= 0; i--){
                output[--count[array[i]]] = array[i];
                //array[i]  ---> get the value 
                //--count[array[i]] ---> decrease the count array that position
                //output[--count[array[i]]] --> go the that position output array
                //array[i] -- > put the array value
        }

        //Copy sorted array to the main array.
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
