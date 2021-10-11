// https://www.geeksforgeeks.org/stdarray-in-cpp/
// Static array or this STL defined array doesn't decays to pointer when pass to the function.
// https://www.youtube.com/watch?v=Hw42GkHPyvk&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=57
// passing std array to a function -> https://stackoverflow.com/questions/17156282/passing-a-stdarray-of-unknown-size-to-a-function

#include<iostream>
#include<array>
using namespace std;

void printData(auto &name){
        for (auto i = name.begin(); i < name.end(); i++){
                cout << *i << " ";
        }
}


int main(){
        array<string, 3> name = {"Sazin", "Reshed", "Samin"};
        printData(name);
}
