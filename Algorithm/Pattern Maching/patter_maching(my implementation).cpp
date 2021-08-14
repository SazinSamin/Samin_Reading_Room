//This is regular implement has a flaw
//That is can't detect if pattern occur in just one afterwards.

#include<iostream>
using namespace std;

int main(){
        char array[] = "AABAACAADAABAABA";
        char pat[] = "AABA";
        int arrayLength = sizeof(array) / sizeof(array[0]) -1;
        int patternLength = sizeof(pat) / sizeof(pat[0]) -1;
        int count = 0;

        int j = 0;
        for(int i=0; i<arrayLength; i++){
                char x = array[i];
                char y = pat[j];
                if(array[i] == pat[j]){
                        j++;
                        if(j == patternLength){
                                cout<<"\nPattern found on: "<<i-patternLength+1<<endl;
                
                        }
                }else{
                        j = 0;
                }
        }
}
