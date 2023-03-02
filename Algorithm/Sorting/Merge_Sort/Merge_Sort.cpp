//Merge sort implementation
//This code sometimes crash for small data
//And give undefined result

#include<iostream>
using namespace std;

void Merge(int arr[], int l, int m, int r){
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;

        int L[n1], R[n2];

        for (i = 0; i < n1; i++)
                L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
                R[j] = arr[m + 1 + j];

        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2){
                if (L[i] <= R[j]){
                        arr[k] = L[i];
                        i++;
                }
                else{
                        arr[k] = R[j];
                        j++;
                }
                k++;
        }

        while (i < n1){
                arr[k] = L[i];
                i++;
                k++;
        }

        while (j < n2){
                arr[k] = R[j];
                j++;
                k++;
        }
}

void MergeSort(int arr[], int l, int r){
        if (l < r){
                int m = l + (r - l) / 2;
                MergeSort(arr, l, m);
                MergeSort(arr, m + 1, r);
                Merge(arr, l, m, r);
        }
}


int main(){
        int list[] = {12, 11, 13, 5, 6, 7};
        int length = sizeof(list) / sizeof(list[0]);
        
        
        MergeSort(list, 0, length);
        cout<<"\nSort arr: ";
        for(int i=0; i<length; i++){
                cout<<list[i]<<" ";
        }
        return 0;
}
