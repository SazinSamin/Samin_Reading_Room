//https://www.geeksforgeeks.org/optimized-naive-algorithm-for-pattern-searching/
//This algorithm works for special pattern input
//where every character of pattern are different
#include <iostream>
using namespace std;

void search(string txt, string pat){
        int txtLength = txt.size();
        int patLength = pat.size();
        int i = 0, j;

        while (i < txtLength){
                for (j = 0; j < patLength; j++){
                        char c = txt[i + j];
                        char d = pat[j];
                        if (txt[i + j] != pat[j]){
                                break;
                        }
                }
                if (j == patLength){
                        cout << "\nMatch found: " << i;
                        i = i + patLength - 1;
                }

                if (j == 0){
                        i = i + 1;
                }
                else{
                        i = i + j;
                }
        }
}

int main(){
        string txt =  "ABCEABCDABCEABCD";
        string pat = "ABCD";
        search(txt, pat);
}
