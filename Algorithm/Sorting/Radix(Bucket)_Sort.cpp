#include<iostream>
#include<math.h>
using namespace std;

int getMax(int array[], int n){
        int max = -999999;
        for(int i=0; i<n; i++){
                if(array[i] > max){
                        max = array[i];
                }
        }
        return max;
}

int getRemainder(int n, int p){
        int result;
        for(int i=1; i<=p; i++){
                result = n % 10;
                n/=10;
        }
        return result;
}

void sorting(int array[], int n, int pos){

        int count[10];
        int output[n];

        for(int i=0; i<=9; i++) count[i] = 0;
        
        for(int i=0; i<n; i++){
                //int v = array[i];
                //int y = getRemainder(v, pos);
                count[getRemainder(array[i], pos)]++;
        }


        for(int i=1; i<=9; i++) count[i] += count[i-1];


        for(int i=n-1; i>=0; i--){
                //int q = array[i];
                //int r = getRemainder(q, pos);
                //int w = --count[r];
                output[--count[getRemainder(array[i], pos)]] = array[i];
        }

        for(int i=0; i<n; i++){
                array[i] = output[i];
        }
}

void radixSort(int array[], int n){
        int max = getMax(array, n);
        int pos = 1;
        while(max > 0){
                sorting(array, n, pos++);
                max/=10;
        }
}



int main(){
        int array[] = {97, 57, 208, 699, 125, 734};

        int length = sizeof(array) / sizeof(array[0]);

        radixSort(array, length);

        cout<<"\nSorted array: \n";
        for(int i=0; i<length; i++){
                cout<<array[i]<<" ";
        }
}
