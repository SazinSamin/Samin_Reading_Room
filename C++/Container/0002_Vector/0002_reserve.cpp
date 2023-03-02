// https://www.geeksforgeeks.org/using-stdvectorreserve-whenever-possible/

// vector is dynamic allocating data structure.
// but we can allocate space in first position like array.
// so the requested space will allocated for the vector.
// no dynamic allocation will happened before the space has consumed.
// increase performance.

#include<iostream>
#include<vector>
using namespace std;

int main() {
        vector<int> v1;
        v1.reserve(5);
        v1 = {1, 2, 3, 4, 5};

        for(auto it = v1.begin(); it != v1.end(); it++) {
                cout << *it << endl;
        }
}
