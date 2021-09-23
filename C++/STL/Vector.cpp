#include<iostream>
#include<vector>
using namespace std;

// when we pass vector in a function, we should pass it as a reference, because unlike array which, when pass the array
// to a function, that array decays to pointer, but the vector here actullay copy the whole elements of the array,when
// we pass that to a function. 
// which have performance drawback, beacuse copying whole elements take a lot of time.

void PrintVector(vector<int>& v){
        for(int i=0; i < v.size(); i++){
                cout << v[i] << endl;
        }
}

int main()
{
  
        // declearation of vecto with "int" data type
        vector<int> v;

        for(int i=0; i<10; i++) { 
                // add elements to the vector.
                v.push_back(i);
        }

        PrintVector(v);

        // delete a specifiq element of vector.
        v.erase(v.begin() + 7);
}
