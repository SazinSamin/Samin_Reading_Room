#include<iostream>
#include<vector>
using namespace std;
#define PRIME_HASH 10
#define VECTOR_SIZE 10


int Hashing(int data){
        return (data % PRIME_HASH) % VECTOR_SIZE;
}

void HashingChaining(vector<int> *v, int data){
        int hasValue = Hashing(data);
       v[hasValue].push_back(data);
}


bool search(vector<int> *v, int data){
        int x = data % 10;
        int flag = 0;
        for(int i=0; i<v[data % 10].size(); i++){
                if(data == v[(data % 10)][i]){
                     flag = 1;
                     break;   
                }
        }
        return flag;
}


int main(){

        int arr[] = {89, 85, 59, 63, 57, 12, 64, 62, 29, 38, 47, 93, 36, 44, 63, 23, 39, 85, 64, 27, 17, 97, 24, 96, 83, 72, 75, 76, 11, 14, 82, 52, 99, 94, 67, 57, 58, 32, 19, 87, 70, 18, 80, 59, 15, 96, 82, 6, 81, 98};
        vector<int> v[VECTOR_SIZE];
        int length = sizeof(arr) / sizeof(arr[0]);
        for(int i=0; i<length; i++){
                HashingChaining(v, arr[i]);
        }

        for(int i=0; i<VECTOR_SIZE; i++){
                cout<<i<<": ";
                for(int j=0; j<v[i].size(); j++){
                        cout<<v[i][j]<<" ";
                }
                cout<<"\n";
        }

        if(search(v, 97))
                cout<<"\nFound";
        else
                cout<<"\nNot found";
        
}

