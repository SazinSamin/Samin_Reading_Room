#include<stdio.h>
#define MAX 1000+1

#include <iostream>
using namespace std;

void patAttery(string s, int array[]){
        
        int i = 0;
        int j = 1;
        for (int i = 0; i < s.size(); i++)
                array[i] = 0;

        while (s[j] != '\0'){
                if (s[i] == s[j]){
                        array[j] = i + 1;
                        int u = array[j];
                        i++;
                        j++;
                }
                else{
                        if (i == 0){
                                j++;
                        }
                        else{
                                while (i > 0){
                                        i = array[i - 1];
                                }
                                array[j] = i;
                                j++;
                        }
                }
        }
}



void KMP(string txt, string pat){
        int array[txt.size()];
        patAttery(pat, array);


        int i =0;
        int j =0;
        int idx = 0;

        for(int i=0; i<txt.size()+1; i++){
                idx = i;
                if(j == pat.size()-1){
                        cout<<"\nPattern found at index: "<<idx - j<<endl;
                        j = 0;
                }
                if(txt[i] == pat[j]){
                        j++;
                }else{
                        int u = array[j];
                        if(j>0)
                                j = array[j-1];
                        else
                                j = 0;
                }
        }
}


int main(){
        string txt = "AABAACAADAABAABA";
        string pat = "AABA";
        int array[10];
        KMP(txt, pat);
}
