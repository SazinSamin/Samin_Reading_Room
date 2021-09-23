// This video have sort of explaination
// https://www.youtube.com/watch?v=HcESuwmlHEY&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=49

#include<iostream>
#include<vector>
using namespace std;

void PrintVector(vector<int>& v){
        for(int i=0; i < v.size(); i++){
                cout << v[i] << " ";
        }
}

int main(){

        // Here the "v(3)" interpret that we actulay construct 3 elements here, as I personally find that when I print this 
        // vector it have three elements which initialize to 0.
        vector<int> v(3);

        // reserve will reserve some space primarily, instead of allocating memory when we push_back
        // it will reserve that number space we give to it, primarily
        v.reserve(2);

        // and here what push_back does that it push elements in the back of that three 0s.
        for(int i=0; i<10; i++) { 
                v.push_back(i);
        }



        PrintVector(v);

        /* output:

        0 0 0 0 1 2 3 4 5 6 7 8 9

        */

}
