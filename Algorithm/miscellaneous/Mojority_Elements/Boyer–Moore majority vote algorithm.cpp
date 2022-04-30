// https://www.youtube.com/watch?v=n5QY3x_GNDg



#include<iostream>
#include<vector>
using namespace std;

int moore(vector<int> v) {
    int maj_idx = 0;
    int count = 1;
    for(int i = 0; i < v.size(); i++) {
        if(v[maj_idx] == v[i]) {
            count++;
        } else {
            count--;
        }
        if(count == 0) {
            maj_idx = i;
            count = 1;
        }
    }
    return v[maj_idx];
}



int main() {
    vector<int> v = {2, 1, 2, 4 ,2, 2, 2};
    cout << moore(v) << endl;
}
