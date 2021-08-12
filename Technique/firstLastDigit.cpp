//https://codeforwin.org/2015/06/how-to-find-first-and-last-digit-of-any-number.html

#include<iostream>
#include<math.h>
using namespace std;


int main(){
       
       int n = 1000;

       //Get first digit without a loop
       
       int digit;
     
       
       //This log will return how many times you have to do power of that number
       //Like 10 ^ 3 = 1000, means log10(100) = 3, 
       //All the number between 1000 to 9999 (do power) will be 3.something
       //When you go to next "doshok" like 10000, this (do power)  also increase by 1
       //Like 10^4 = 10000, means log10(10000) = 4
       digit = (int) log10(n);
       
       
       //Digit will return you that power value
       //So now power that again base 10,
       //Like 10^3 = 1000, means that pow(10, 3)
       //This divide with our number & return just the first number 
       //if we type convert to a integer.
       int firstDigit = (int) n / pow(10, digit);
       
       
       
       cout<<"\nFirst digit: "<<firstDigit;

       //Get last digit
       cout<<"\nLast digit: "<<n%10;
}
