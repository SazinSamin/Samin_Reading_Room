#include<iostream>
using namespace std;
#define PRIME 73339133

int GetHash(string s){
        int sum = 0;
        int i = 0;
        while(s[i] != '\0'){
                sum += s[i++];
        }
        return sum % PRIME;
}

int AreEqual(string SelectText, string pat){
        for(int i=0; i<pat.size(); i++){
                if(SelectText[i] != pat[i]){
                        return 0;
                }
        }
        return 1;
}

void Machter(string txt, string pat){

        int patGetGetHash = GetHash(pat);
        
        for(int i=0; i<(txt.size() - pat.size()) + 1; i++){
                string selectTxt = txt.substr(i, pat.size());
                int selectGetGetHash = GetHash(selectTxt);
                
                if(patGetGetHash != selectGetGetHash){
                        continue;
                }else{
                        if(AreEqual(selectTxt, pat))
                                cout<<"\nPattern found at: "<<i;
                }
        }
}


int main(){
        string txt = "AABAACAADAABAABA";
        string pat = "AABA";
        Machter(txt, pat);
}
