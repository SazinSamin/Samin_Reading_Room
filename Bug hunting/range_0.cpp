/*I have get a very strange problem here, line 17 foor loop, after finishing the process of for loop, the range variable value become
8 to 0, but the value store in different varibale. So I dig into the address arithmatic and find that when allocate memory for count array
(line 11) exact less than the requirement, the line 19 for loop access to that address(where the range "range" variable value store),
and set it as 0(as we here set count[i] = 0, we also set different value). Also this happened only when we pass a array from the main 
function.  

If we don't pass the and array from the main function it doesn't happend.
Also one thing I observe it happend when we pass multipy of 4 like 0,4,8,12,16,20.
One thing may be 

*/


/*
Range: 8
Range address 1: 0x7ffdc6f678e0         -----> address of the range variable
0x7ffdc6f678c0
0x7ffdc6f678c4
0x7ffdc6f678c8
0x7ffdc6f678cc
0x7ffdc6f678d0
0x7ffdc6f678d4
0x7ffdc6f678d8
0x7ffdc6f678dc
0x7ffdc6f678e0                          -----> loop access to the range variable and set as 0, we can set whatever we want

Range now: 0
Range address 2: 0x7ffdc6f678e0
*/

#include <iostream>
using namespace std;

void CountingSort(int array[], int n, int range){
        int count[range];



        cout<<"\nRange: "<<range;
        cout<<"\nRange address 1: "<<&range<<endl;


        for(int i=0; i<=range; i++){
                count[i] = 0;
                cout<<&count[i]<<endl;
        }



        cout<<"\nRange now: "<<range;
        cout << "\nRange address 2: " << &range;
        cout<<"\n";


        for(int i=0; i<=range; i++){
                cout<<count[i]<<" ";
        }
}

int main(){

        int array[] = {1, 2, 4, 3, 0, 2, 1, 7, 1, 4, 3, 0};
        int range = 8;

        

        int length = sizeof(array) / sizeof(array[0]);
        CountingSort(array, length, range);
}
