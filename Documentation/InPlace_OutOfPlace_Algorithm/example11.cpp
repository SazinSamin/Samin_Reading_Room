#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<char>& s) {
        int temp;
        int i = 0;
        int j = s.size() - 1;
        while(i < j) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++; j--;
        }
}


int main() {
        vector<char> s = {'F', 'e', 'b', 'r', 'u', 'a', 'r', 'y'};
        reverse(s);
        for(auto it = s.begin(); it != s.end(); it++) {
                cout << *it;
        }
}
