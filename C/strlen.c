#include<stdio.h>

long int strlen(char *s){
        char* p = s;
        while(*p != '\0'){
                ++p;
        }
        return p - s;
}

int main(){
        char s[] = "Sazin Reshed Samin";
        printf("%ld", strlen(s));
}       
