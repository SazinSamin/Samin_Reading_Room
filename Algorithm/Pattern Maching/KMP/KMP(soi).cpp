#include<stdio.h>
#define MAX 1000+1

#include <iostream>
using namespace std;

//Preprocessing for pattern for auxillay array lps
void patAttery(string s, int array[]){
        
        //For traversing the given string
        int i = 0;
        //For traversing the pattern
        int j = 1;
        //set all value to 0
        for (int i = 0; i < s.size(); i++){
                array[i] = 0;
        }
        
        
        while (s[j] != '\0'){
                //If character of given string & pattern match, then increase the j location of corresponding i
                //Then increase both i & j to test next match.
                if (s[i] == s[j]){
                        array[j] = i + 1;
                        //int u = array[j];
                        i++;
                        j++;
                }
                else{
                        //If i == 0, that means i already in first position, so just have to increase the j.
                        if (i == 0){
                                j++;
                        }
                        //If not, then backtrack until you find a match or come to the 0th position.
                        else{
                                while (i > 0){
                                        i = array[i - 1];
                                }
                                array[j] = i;
                                j++;
                        }
                }
        }

        /*for (int i = 0; i < s.size(); i++){
                cout << array[i] << " ";
        }*/
}



void KMP(string txt, string pat){
        int array[txt.size()];
        patAttery(pat, array);


        int i =0;
        int j =0;
        //int txtSize = txt.size();
        //int patSize = pat.size();
        int idx = 0;

        for(int i=0; i<txt.size()+1; i++){
                idx = i;
                if(j == pat.size()-1){
                        cout<<"\nPattern found";
                        break;
                }
                //char x = txt[i]; char y = pat[j];
                if(txt[i] == pat[j]){
                        j++;
                }else{
                        //int u = array[j];
                        if(j>0)
                                j = array[j-1];
                        else
                                j = 0;
                }
        }
        //cout<<"\n"<<idx - j;
}
int main(){
        string txt = "THIS IS A TEST TEXT";
        string pat = "IS";
        int array[10];
        KMP(txt, pat);
}
