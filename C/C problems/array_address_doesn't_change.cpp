/*Here the problem is we want to assign
a new array from the insert function,
So as we know array decays to pointer
when we pass it to a function.
So I want to assign my newly allocated array
"new_arr" to the old "array".
The assignment of address of "new_arr"
is successfully assign to the "array",
But the change we can see in just in the function,
Not in the global scope.
But we know that pointer hold the address of that 
variable.
So if we make any change to that, then the change
reflected globally.
But in this case that's doesn't happened.
The address of "array" remain same in main function.



*/

#include<iostream>
using namespace std;

void insert(int array[]){
        int* ptr;
        int new_arr[5];
        cout << "\nInside new: " << array;
        array = new_arr;
        cout<<"\nInside array: "<<new_arr;
        cout<<"\nInside new: "<<array;
}


int main(){
        int array[5];
        for(int i=0; i<5; i++) array[i] = i;
        cout << "\nAddress: " << array;
        insert(array);
        cout<<"\nAddress: "<<array;
}

/*Output look like:


Address: 0x7ffd673722e0
Inside new: 0x7ffd673722e0
Inside array: 0x7ffd673722a0
Inside new: 0x7ffd673722a0
Address: 0x7ffd673722e0

*/

