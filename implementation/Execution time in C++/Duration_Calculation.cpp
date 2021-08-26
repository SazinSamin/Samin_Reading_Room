//For better example see the example given in cpp reference website...
#include<iostream>
using namespace std;
#include<chrono>
#include<unistd.h>
using namespace std::chrono;

void load(long long x){
        sleep(1);
}

int main(){
        auto start = high_resolution_clock().now();
        for(int i=0; i<5; i++){
                load(i);
        }
        auto stop = high_resolution_clock().now();
        auto duration = duration_cast<milliseconds>(stop - start);
        cout<<"Duation: "<<duration.count();
}
