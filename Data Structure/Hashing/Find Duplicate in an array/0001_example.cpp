#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;


int main() {
  
    int array[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int length = sizeof(array) / sizeof(array[0]);
    unordered_set<int> set;
    unordered_set<int> duplicate;

    for(int i=0; i < length; i++) {
        if(!set.empty()){
            if(set.find(array[i]) != set.end()) {
                duplicate.insert(array[i]);
            } else {
                set.insert(array[i]);
            }
        } else {
            set.insert(array[i]);
        }
    }

    cout << "Duplicate element: " << endl;
    for(unordered_set<int>::iterator it = duplicate.begin(); it != duplicate.end(); it++) {
        cout << *it << " ";
    }
}
