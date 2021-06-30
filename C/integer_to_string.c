#include<stdio.h>
#include<ctype.h>
#include<string.h>


void reverse(char s[]);
int count(int n);
void itoa(int n, char s[]);

int main(){
        int n = -123456789;
        int length = count(n);
        char s[100];
        itoa(n, s);
        printf("\n%s", s);


}

void itoa(int n, char s[]){
        int i = 0, sign;
        if(sign = (n < 0)){
                n = -n;
        }
        
        do{
                s[i++] = (n % 10) + 48;
        } while ((n = (n / 10)) > 0);

        if(sign) s[i++] = '-';
        reverse(s);
}

int count(int n){
        int i = 0;
        while ((n /= 10) > 0)
                i++;
        return i + 1;
}

void reverse(char s[]){
        int c, i, j;
        for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
                c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}