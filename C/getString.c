#include<stdio.h>
#define MAX 100

void getString(char *s, int max){
        char c; int i = 0;
        while(--max > 0 && (c = getchar()) != '\n' && c != '\0'){
                s[i++] = c;
        }
        if(c == '\n'){
                s[i] = '\0';
        }
}

int main(int argc, char* argv[]){
        char s[MAX];
        getString(s, MAX);
        printf("%s", s);
}
