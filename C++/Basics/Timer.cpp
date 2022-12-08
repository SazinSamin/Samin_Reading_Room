#include<iostream>
#include<chrono>
using namespace std;

class MyTimer{
private: 
        std::chrono::time_point < std::chrono::_V2::system_clock> start, end;

public:
        MyTimer(){
                start = chrono::high_resolution_clock::now();
        }

        ~MyTimer(){
                end = chrono::high_resolution_clock::now();
                chrono::duration<float> duration =  (end - start) * 1000.00f;
                cout << "Time took by this function: " << duration.count() << "ms"<< endl;
        }
};

void ForEach(int n){
        MyTimer timer;
        for(int i=0; i<n; i++){

        }
}


int main(){
        ForEach(100);
}
