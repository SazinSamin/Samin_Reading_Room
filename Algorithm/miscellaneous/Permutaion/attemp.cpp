#include<iostream>
#include<vector>
using namespace std;


void permutation(vector<int> v) {
    int f = v[0];
    int x = 1;
    for(int i = 0; i < v.size(); i++) {
        
        for(int j = 0; j < x - 1; j++) {
            cout << v[j] << " ";
        }
        cout << f << " ";
        for(int j = x; j < v.size(); j++) {
            cout << v[j] << " ";
        }
        cout << "\n";
        x++;
    }
}



int main() {
    vector<int> v = {1, 2, 3, 4};
    permutation(v);
}
