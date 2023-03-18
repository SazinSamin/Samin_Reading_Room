// copy_to_set_from_other_without_loop

#include<bits/stdc++.h>
using namespace std;

int main() {
        vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        unordered_set<int> s1{begin(v1), end(v1)};

        for(auto s : s1) {
                cout << s << " ";
        }


}
