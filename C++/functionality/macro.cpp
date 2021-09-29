// https://www.youtube.com/watch?v=j3mYki1SrKE&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=55
// https://www.geeksforgeeks.org/cc-preprocessors/
// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/

#include<iostream>
using namespace std;
#define print(data) cout << data << endl

#define START int main()
#define OPEN {
#define CLOSE }

// also can if linux == 1
#ifdef linux
#define sysinfo print("Linux platform")
#else
#define sysinfo print("Not linux")
#endif

// multiline macro
#define forloop(start, end) for(int i=start; i<end; i++) { \
        print(i); \
}

START
OPEN
        
        print("Sazin Reshed Samin");
        print("United International University");
        sysinfo;
        forloop(0, 10)

CLOSE
