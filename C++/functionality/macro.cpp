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
