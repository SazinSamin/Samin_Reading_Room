// https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/
// find operation
// https://www.geeksforgeeks.org/unordered_set-find-function-in-c-stl/

#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
        unordered_set<int> set;
        int array[4] = {1, 2, 3, 4};
        for(int i=0; i<4; i++) {
                set.insert(array[i]);
        }
  
        // if find() operation found the element it return an iterator, else it return end of the set.
        if(set.find(4) != set.end()) {
                cout << "Element found" << endl;
        } else {
                cout << "Element not found" << endl;
        }

        return 0;
}
