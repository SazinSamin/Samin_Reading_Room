#include<iostream>
using namespace std;

double sqaureRoot(int n){
        double low = 0, high = n, mid;
	
	//Here the difference between high
	//and low will make sure the preciseness
        while((high - low) > 0.000001){
                mid = (low + high) / 2;
                if((mid * mid) == n){
                        return mid;
                }else if((mid * mid) > n){
                        high = mid;
                }else if((mid * mid) < n){
                        low = mid;
                }
        }
        return mid;
}

int main(){
        cout<<sqaureRoot(66);
}
