#include<iostream>
using namespace std;

// https://www.educative.io/edpresso/what-are-in-place-and-out-of-place-algorithms

// In-place algorithms are a type of algorithm in computer science that do not require additional 
// space for their operation. Additional variables that consume a small amount of nonconstant 
// memory are acceptable. This extra space should be less than O(log\space n)O(log n), however, 
// below O(n)O(n) is sometimes allowed. The opposite of an in-place algorithm is an out-of-place
//  or not-in-place algorithm.






// Out of place Algo for reversing the array
void outOfPlaceAlgo(int arr[], int size)
{

    // required extra space for reversing the array.
    int rev[size];
    for(int i = 0; i < size; i++) {
        rev[i] = arr[size-i-1];
    }

    for(int i=0; i < size; i++) {
        arr[i] = rev[i];
    }
}

// In place Algo for reversing the array
void inPlaceAlgo(int arr[], int size)
{   

    // in place algo do not need any extra space, or space which is below O(n).
    int temp;
    for(int i=0; i < size; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i -  1] = temp;
    }
}

int main() {
    cout << "Out of place Algo for reversing the array";
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    outOfPlaceAlgo(arr, size);
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "In place Algo for reversing the array";
    int arra2[size] = {1, 2, 3, 4, 5};
    inPlaceAlgo(arra2, size);
    for(int i = 0; i < size; i++) {
        cout << arra2[i] << " ";
    }

}
