// https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/


#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
        unordered_set<int> set1;
        for(int i=1; i <=20; i++) {
                set1.insert(i);
        }

        // return iterator, point to the first element.
        unordered_set<int>::iterator it;
        it = set1.begin();
        cout << *it << endl;

        // last of set, not a element.
        it = set1.end();

        // find an element in set
        if(set1.find(3) != set1.end())
                cout << "Element found" << endl;
        else
                cout << "Not found" << endl;


        // remove all elements
        // set1.clear();

        cout << "Backet count: " << set1.bucket_count() << endl;
        // bucket_size(param), here param is bucket number, mean which bucket total elements size we want.
        cout << "Num 3 Bucket total elements: " << set1.bucket_size(1) << endl;

        // erase a specifiq element from bucket.
        set1.erase(3);

        // return size of set
        cout << "size: " << set1.size() << endl;
        
        // return true & iterator if element already present or return false if not present
        set1.emplace(5);

        cout << "Max size:  " << set1.max_size() << endl;

        cout << "Is empty " << set1.empty() << endl;

        cout << "Load factor: " << set1.load_factor() << endl;
        


}
