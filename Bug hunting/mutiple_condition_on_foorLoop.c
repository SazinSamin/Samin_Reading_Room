#include<iostream>
using namespace std;

// here I want to print while i less that 20 and the i is even number, but in first it doesn't work.
// after some times I realize that if any condition get false, execution come out from the loop at that moment. So it doesn't able
// increment the i value again, and code doesn't work. If you do it for odd number(when i % 2 == 1), it loop once, because after that 
// the condition become false and execution of looping stops.

int main() {
        for(int i=1; i<20 && i % 2 == 0; i++) {
                cout << i << endl;
        }
}
