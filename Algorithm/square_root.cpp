#include<iostream>
using namespace std;

double square(int n){
        double precisoin = 0.0001;
        double i;
        for(i=1; i*i<=n; i++);
        for(i--; i*i<n; i+=precisoin);
        return i;
}

int main(){
        cout<<square(49);
}
