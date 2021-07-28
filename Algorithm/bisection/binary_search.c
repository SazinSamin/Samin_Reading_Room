#include<iostream>
using namespace std;

int BinarySearch(int array[], int n, int key){
        //Set low and high value.
        int low = 1, mid, high = n;
        
        while(low <= high){
                //calculate the mid.
                mid = (low + high) / 2;
                //Find if  the element match with the mid value.
                if(array[mid] == key){
                        return mid;
                //If element less than mid value 
                //Set high value equal to mid 
                //for traverse only the left half.
                }else if(key < array[mid]){
                        cout<<"\n"<<array[mid]<<" ";
                        high = mid -1 ;
                //Do same for traverse right half.
                }else if(key > array[mid]){
                        low = mid + 1;
                }
        }
        //If element doesn't found
        //return a value to indicate that.
        return -9999999;
}


int main(){
                int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
                BinarySearch(array, 15, 17);
                for(int i=0; i<20; i++){
                        cout<<array[i]<<endl;
                }
}
