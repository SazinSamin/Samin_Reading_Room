// reference are refer to that variable....
// https://www.youtube.com/watch?v=IzoFn3dfsPA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=17

#include<iostream>
using namespace std;

#define log(a) cout << a


void increment(int& count){
        count += 10;
}

int main(){

        int a = 10;
        increment(a);
        cout << a;
}
