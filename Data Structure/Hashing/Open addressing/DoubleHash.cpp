//https://www.geeksforgeeks.org/double-hashing/
/*Double hashing is a collision resolving technique in "Open Addressed Hash tables". Double hashing uses the idea of applying a second hash function to key when a collision occurs.

Double hashing can be done using :
(hash1(key) + i * hash2(key)) % TABLE_SIZE
Here hash1() and hash2() are hash functions and TABLE_SIZE
is size of hash table.
(We repeat by increasing i when collision occurs)
*/


#include<iostream>
#include<math.h>
using namespace std;
#define MAXSIZE 13
#define PRIME_SIZE 7
#define HashFunction(index1, index2, i) ((index1 + (i * index2)) % MAXSIZE)

class DoubleHash{
        int *hash_table;
        int current_size;

public:
        bool isFull(){
                if(current_size == MAXSIZE)
                        return true;
                return false;
        }

        int hash1(int key){
                return (key % MAXSIZE);
        }

        int hash2(int key){
                return (PRIME_SIZE - (key % PRIME_SIZE));
        }

        DoubleHash(){
                hash_table = new int[MAXSIZE];
                current_size = 0;
                for(int i=0; i<MAXSIZE; i++){
                        hash_table[i] = -1;
                }
        }

        void insert(int key){
                if(isFull()){
                        cout<<"\nHasTable is Full";
                        return;
                };

                int index1 = hash1(key);
                if(hash_table[index1] != -1){
                        int index2 = hash2(key);
                        int i = 0;
                        while(true){
                                int newIndex = HashFunction(index1, index2, i);
                                if(hash_table[newIndex] == -1){
                                        hash_table[newIndex] = key;
                                        break;
                                }
                                i++;
                        }
                }
                else{
                        hash_table[index1] =  key;
                }
                current_size++;
        }

        void search(int key){
                int index1 = hash1(key);
                int index2 = hash2(key);
                int i = 0;

                while (hash_table[HashFunction(index1, index2, i)] != key){
                        if(hash_table[HashFunction(index1, index2, i) == -1]){
                                cout << "\nSorry, key not found !!!";
                                return;
                        }
                        i++;
                }
                cout<<"\nKey "<<key<<" found !!!";
        }


        void display(){
                cout<<"\nHash table: "<<endl;
                for(int i=0; i<MAXSIZE; i++){
                        if(hash_table[i] != -1)
                                cout<<i<<": "<<hash_table[i]<<endl;
                        else
                                cout<<i<<endl;
                }
        }
};



int main(){
        int arr[5] = {1,5, 4, 5, 1};
        int length = sizeof(arr) / sizeof(arr[0]);
        DoubleHash hashMap;
        for(int i=0; i<length; i++){
                hashMap.insert(arr[i]);
        }

        hashMap.display();
        
        hashMap.search(5);
        hashMap.search(1);
}
