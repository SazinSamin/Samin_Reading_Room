/*I have get a very strange problem here 
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
