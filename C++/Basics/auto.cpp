// https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
// https://www.youtube.com/watch?v=2vOPEuiGXVo&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=56

#include<iostream>
using namespace std;

auto function(auto data){
        return data;
}


int main(){

        auto a = function("Sazin");
        cout << a;
}
