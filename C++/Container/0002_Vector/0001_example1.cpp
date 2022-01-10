// https://www.programiz.com/cpp-programming/vectors
// https://www.cplusplus.com/reference/vector/vector/


#include<bits/stdc++.h>
using namespace std;


int main() {
        vector<int> v1 = {1, 2, 3, 4};
        v1.push_back(5);

        vector<int>:: iterator it;
        // traversing the vector.
        for(it = v1.begin(); it != v1.end(); it++) {
                cout << *it << endl;
        }        

        // search an element, if not found return vector end.
        vector<int>:: iterator res;
        res = find(v1.begin(), v1.end(), 2);
        if(res != v1.end()) {
                cout << "Element found" << endl;
        }

        // delete an element
        vector<int>:: iterator eraseElement =  v1.begin();
        v1.erase(eraseElement + 1);

}
