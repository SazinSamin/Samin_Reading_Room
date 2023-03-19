// https://www.geeksforgeeks.org/std-find-in-cpp/

#include<bits/stdc++.h>
using namespace std;

int main() {
        vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int>::iterator it;
        it = find(v1.begin(), v1.end(), 2);
        cout << *it << endl;


}
