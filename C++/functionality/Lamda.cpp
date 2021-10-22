// https://www.youtube.com/watch?v=mWgmBBz0y8c&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=60
// https://www.geeksforgeeks.org/lambda-expression-in-c/

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> v, void(*print)(int)){
        for(int i=0; i<v.size(); i++){
                print(i);
        }
}

int main(){

        vector<int> v = {1,2,3,4,5,6,7,8,9,10};
        // inline lamda function, which we can also put in a variable
        // lamda function always start with [] which called "capture clause"
        printVector(v, [](int val) { cout << val << endl; });

        // the capture clause[] also take argument &(pass by ref), =(pass by val) ,
        // by which we can access to the outside argument in lamda function.  

}
