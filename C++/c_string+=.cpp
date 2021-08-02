//C++ string work like other varibale
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
        int x;
        char c[] = "Sazin";
        int length = sizeof(c) / sizeof(c[0]);
        string s;
        for (int i = 0; i < length; i++){
                s += c[i];
        }

        cout << s <<endl;

        //Another example.

        srand(time(0));
        string r, v;
        for(int i=0; i<5; i++){
                int v = rand() % 100;
                r += to_string(v);
        }

        cout<<r;
}
