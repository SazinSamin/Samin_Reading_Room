// https://www.youtube.com/watch?v=UAAiwObNhQ0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=76
// https://en.cppreference.com/w/cpp/utility/optional
// This code compile on https://www.onlinegdb.com/online_c++_compiler
// with C++17 compiler



#include<iostream>
#include<optional>
using namespace std;

optional<int> getAge(int age){
    if(age > 0){
        return age; 
    }
    return {};
}



int main(){

    optional<int> getage = getAge(24);
    if(getAge){
        int age = *getage;
        cout << age << endl;
    }

    cout << getAge(-24).value_or(-99) << '\n';
}
