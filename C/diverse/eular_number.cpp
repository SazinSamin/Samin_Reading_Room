#include<iostream>
using namespace std;

long double calcu(int val){
        long long int sum = 1;
        for (long long int i = val; i >= 1; i--){
                sum = sum * i;
        }
        return sum;
}

int main(){
        long double result  = 0;
        for(long double i=0; i<=15; i++){
                result += (1 / calcu(i));
        }

       cout<<"\nThe result: "<<result;
}