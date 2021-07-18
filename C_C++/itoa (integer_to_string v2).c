#include<stdio.h>
int i = 0;

int itoa(int n, char s[]){
        if(n < 0){
                n  = -n;
                s[i++] = '-';
        }

        if(n / 10){
                itoa(n / 10, s);
        }
        s[i++] = (n % 10) + 48;
}

int main(){
        int n;
        scanf("%d", &n);
        char s[100];
        itoa(n, s);
        printf("%s", s);
}