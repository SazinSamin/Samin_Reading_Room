// https://en.cppreference.com/w/cpp/container/unordered_map


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

        using myMap = unordered_map<int, string>;
        myMap map = {
            {1, "Location"},
            {2, "Area"}};

        for(auto key : map){
                cout << key.first << " " << key.second << endl;
        }
}
