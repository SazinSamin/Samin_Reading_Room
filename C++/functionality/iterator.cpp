// https://www.youtube.com/watch?v=SgcHcbQ0RCQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=95
// https://www.geeksforgeeks.org/introduction-iterators-c/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

        // vector based example
        vector<int> v = {1, 2, 5, 6, 8};

        for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
                cout << *it << endl;
        }

        // map based example
        using myMap = unordered_map<int, string>;
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

        // vector based example
        vector<int> v = {1, 2, 5, 6, 8};

        for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
                cout << *it << endl;
        }

        // map based example
        using myMap = unordered_map<int, string>;
        myMap map = {
            {1, "Location"},
            {2, "Area"}};

        for(myMap::iterator it = map.begin(); it != map.end(); it++){
                cout << it->first << " " << it->second << endl;
        }

        // another version for for loop
        /*for(auto x : map){
                cout << x.first << " " << x.second << endl;
        }*/
}        myMap map = {
            {1, "Location"},
            {2, "Area"}};

        for(myMap::iterator it = map.begin(); it != map.end(); it++){
                cout << it->first << " " << it->second << endl;
        }

        // another version for for loop
        /*for(auto x : map){
                cout << x.first << " " << x.second << endl;
        }*/
}
