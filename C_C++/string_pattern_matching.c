#include<stdio.h>
#define MAX 100
char pattern[] = "Un";

int getdata(char s[], int max){
       int c, i = 0;
       while(--max>0 && (c = getchar()) != 0 && c!='\n'){
              s[i++] = c;
       }
       if(c == '\n'){
              s[i++] = c;
       }
       s[i] = '\0';
       return i;
}

int strindex(char s[], char t[]){

       int i, j, k;
       i = j = k = 0;
       for(int i=0; s[i] !='0'; i++){
              for(j=i, k=0; t[k]!='\0' && s[j] == t[k]; j++, k++);
              if(k>0 && t[k] =='\0'){
                     return i;
              }
       }
       return -1;
}

int main(){
       char line[MAX];
       int found = 0;
       while((getdata(line, MAX)) > 0){
              if(strindex(line, pattern) >=0){
                     printf("\n%s", line);
                     found++;
              }
       }
}
