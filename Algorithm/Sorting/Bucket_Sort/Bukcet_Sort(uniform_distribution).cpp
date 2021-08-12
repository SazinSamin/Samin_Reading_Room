#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void BucketSort(float array[], int n){
        vector<float> Bucket[n];
        int r = 10;
        for(int i=0; i<n; i++){
		//(r * array[i]) -> get the corresponding integer value from the float.
                Bucket[(int) (r * array[i])].push_back(array[i]);
        }

        for (int i = 0; i < n; i++){
                sort(Bucket[i].begin(), Bucket[i].end());
        }

        int k = 0;
        for(int i=0; i<n; i++){
                for(int j=0; j<Bucket[i].size(); j++){
                        array[k++] = Bucket[i][j];
                }
        }
        
}

int main(){
        float array[] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
        int length = sizeof(array) / sizeof(array[0]);

        BucketSort(array, length);
        cout<<"\nSorted array: ";
        for(int i=0; i<length; i++) cout<<array[i]<<" ";
}
