// https : //www.youtube.com/watch?v=NUZdUSqsCs4&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=39
// "new"  always allocate memory in heap

#include<iostream>
        using namespace std;

class Parent{
        public:
                Parent(){
                        cout << "This is Parent Class" << endl;
                }
};


int main(){
        // allocating single integer in the heap, single integer here is 4 bytes( depends on compiler).
        int* n = new int;
        // allocating  50 block of integer type contiguous memory in the heap. ( 4 (integer size) * 50 = 200 bytes of memory)
        int* array = new int[50];

        // allocating size of Parent class memory in the heap
        Parent* p1 = new Parent;
        // allocating size of 10 Parent class contiguous memory in the heap
        Parent* p2 = new Parent[10];

        // We should not allocate memory in C style way in C++,
        // because this doesn't call constructor of the class
        // Parent* p3 = (Parent*) malloc(sizeof(Parent));


        // Whenever you allocate memory in the heap, you have to dellocate that memory manullay,
        // C++ doesn't have automatic garbase collector.

        // deallocate single memory
        delete n;
        // deallocate array of memory.
        delete[] array;
        delete p1;
        delete[] p2;
}
