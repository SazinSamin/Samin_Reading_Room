// instead of declearing a two dimensional array, we can also do the same thing with one dimensional array.
// because in one dimensional array the memory are contiguous, so they have faster access.
//  See this video last portion ->      https://www.youtube.com/watch?v=gNgUMA_Ur0U&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=64

#include<iostream>
using namespace std;

int main(){


        int n = 5;
        int count = 0;
        
        // we have declear a two dimensional array, and put some value to that array in traditional way.
        int array[n][n];
        for(int i=0; i<n; i++){
                for(int j=0; j<5; j++){
                        array[i][j] = count++;
                }
        }

        // accessing and printing that value to the console in regular way.
         for(int i=0; i<n; i++){
                for(int j=0; j<5; j++){
                        cout << array[i][j] << endl;
                }
        }

        cout << "\n Array2: " << endl;
        count = 0;

        // now we can put those value in one dimensional array in same way.
        // declear one dimensional array with multification of rows and columns.
        int array2[n*n];

        // We can put the value in array by storing them in contiguous location.
        // when each row finish it jump into the next column by multiply the row with column length.
        for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                        array2[(i*5) + j] = count++;
                }
        }

        // Storing elements like this we can retrieve the elements in O(n) times.
        for(int i=0; i<n*n; i++){
                cout << array2[i] << endl;
        }
}
