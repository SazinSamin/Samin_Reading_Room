// https://www.programiz.com/cpp-programming/ranged-for-loop

#include<iostream>
#include<vector>
using namespace std;

int main(){
        
        int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        // range based foor loop 
        for(int var : array){
                cout << var << endl;
        }

        // we can decelar the array direcly inside the loop
        for(int x : vector<int>{1, 3, 5, 7, 9}){
                cout << x << endl;
        }

        int num[3] = {100, 200, 300};
        // normall iterator "int x" will copy the array value every times, so we can just
        // reference "int& x" the array values, also make the iterator const doesn't allow us to modify 
        // the value.
        for(const int& x : num){
                cout << x << endl;
        }
}
