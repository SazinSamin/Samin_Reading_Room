// https://www.youtube.com/watch?v=ts1Eek5w7ZA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=61
// https://www.geeksforgeeks.org/namespace-in-c/
// https://www.geeksforgeeks.org/namespace-in-c-set-2-extending-namespace-and-unnamed-namespace/
// https://www.geeksforgeeks.org/namespace-c-set-3-creating-header-nesting-aliasing-accessing/




#include<iostream>
// namespace aliasing
namespace cpp = std;
using namespace cpp;

namespace apple{
        int value = 10;
}

namespace orange{
        void print(){
                cout << "This namespace belongs to orange" << endl;
        }
}

// accessing namespace "using namespace ___"
using namespace orange;

int main(){
        // accessing namespace using namespace name inline
        cout << apple::value << endl;
        // by "using namespace orange" we can access the namespace member directly
        print();
}
