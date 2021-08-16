//https://www.youtube.com/watch?v=qQ8vS2btsxI
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#define PRIME 5955136219

bool AreEqual(char txt[], int start, char pat[], int patLength){
        for (int i = 0; i < patLength; i++){
                if (txt[start + i] != pat[i]){
                        return false;
                }
        }
        return true;
}

void PolyHash(char txt[], char pat[]){

        int arraySize = strlen(txt);
        int patSize = strlen(pat);
        int array[127];
        for (int i = 65; i <= 127; i++){
                array[i] = i - 64;
        }

        int patternHash = 0;
        int firstSubStringHash = 0;
        int power = patSize - 1;

        for (int i = 0; i < patSize; i++){
                patternHash += (int)(array[pat[i]] * pow(10, power - i)) % PRIME;
                firstSubStringHash += (int)(array[txt[i]] * pow(10, power - i)) % PRIME;
        }

        int i;
        int equation = 0;
        int sub = 0;
        int next = 0;
        for (i = 0; i < arraySize - (patSize - 1); i++){
                if (i == 0){
                        equation = firstSubStringHash;
                }
                else{
                        equation = ((equation - sub) * 10) + next;
                }
                sub = array[txt[i]] * pow(10, (patSize - 1));
                next = array[txt[i + (patSize)]];
                if (equation == patternHash)
                {
                        if(AreEqual(txt, i, pat, patSize))
                                cout<<"\nPattern found in index: "<<i;
                }
        }
}

int main(){
        char txt[] = "This is isis";
        char pat[] = "is";
        PolyHash(txt, pat);
}
