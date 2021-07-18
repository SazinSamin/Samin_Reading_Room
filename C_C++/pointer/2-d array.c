#include<stdio.h>

int main(){

        char s[3][5] = {
                "abeed",
                "megha",
                "samin"
        };

        printf("\n%c", *(*(s+2) + 2));

        char* ptr = *s+ 2;

       printf("\n%p", ptr);
        printf("\n\nS array address: ");
        for(int i=0; i<3; i++){
                for(int j=0; j<5; j++){
                        printf("\n%c: %p", s[i][j], &s[i][j]);
                }
        }

}