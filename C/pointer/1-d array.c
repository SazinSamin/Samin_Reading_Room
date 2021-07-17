#include<stdio.h>

int main(){

        char s[] = "sry";
        char* ptr = s;
        int length = sizeof(s);
        
        char* add = s + 2;
        printf("\n%p", add);
        printf("\n\n");
        for(int i=0; i<length; i++){
                printf("\n%p", &s[i]);
        }

}