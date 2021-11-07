// Get the middle element of a vector using iterator.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

        vector<int> v = {1, 2, 5, 6, 8};

        vector<int>::iterator it = v.begin();
        cout << *(it + (v.size() / 2));
}
