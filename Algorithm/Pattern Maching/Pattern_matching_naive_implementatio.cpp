//This implementation is inspired by this link -> https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/

#include<iostream>
#include <string.h>
using namespace std;

void search(char *txt, char *pat){
        int N = strlen(txt);
        int M = strlen(pat);

        int i = 0, j = 0;

        for (i = 0; i < N-M; i++){
                for (j = 0; j < M; j++){
                        if (txt[i + j] != pat[j]){
                                break;
                        }
                }
                if (j == M){
                        cout<<"\nPattern found in index: "<<i;
                }
        }
}

int main(){
        char txt[] = "AABAACAADAABAAABAA";
        char pat[] = "AABA";
        search(txt, pat);
}

