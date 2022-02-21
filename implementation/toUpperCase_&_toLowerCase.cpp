#include<iostream>
#include<string>
using namespace std;

string toUpperCase(string s) {
    for(int i = 0; i < s.size(); i++) {
        char curr = s[i];
        if(curr >= 97 && curr <=122) {
            s[i] -= 32;
        }
    }
    return s;
}

string toLowerCase(string s) {
    for(int i = 0; i < s.size(); i++) {
        char curr = s[i];
        if(curr >=65 && curr <=90) {
            s[i] += 32;
        }
    }
    return s;
}

int main() {
    string s1 = "sazin";
    string s2 = "SAZIN";
    cout << toUpperCase(s1) << endl;
    cout << toLowerCase(s2) ;

}
