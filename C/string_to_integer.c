#include<stdio.h>
#include<ctype.h>

int atoi(char s[]){

        int i, n = 0, sign, x = 0;

        for( i=0; isspace(s[i]); i++);

        sign = (s[i] == '-') ? -1 : 1;
        if(s[i] == '-' || s[i] == '+') i++;
        for(; isdigit(s[i]); i++)                       //initialize loop with nothing
                n = n * 10 + (s[i] - 48);
        
        return n * sign;
}


int main(){
        printf("\nResult: %d", atoi("    021191011"));
}