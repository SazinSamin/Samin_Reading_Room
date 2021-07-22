#include <stdio.h>
#include <string.h>
#define MAX 32

int binarySearch(char *s, char* key[]);
int getData(char *s){
        char c;
        int i = 0;
        while ((c = getchar()) != '\n'){
                s[i++] = c;
        }
        s[i] = '\0';
        return (i > 0) ? 1 : -1;
}

int main(){
        char s[100];

        char* key[32] = {
            "auto",
            "break",
            "case",
            "char",
            "const",
            "continue",
            "default",
            "do",
            "double",
            "else",
            "enum",
            "extern",
            "float",
            "for",
            "goto",
            "if",
            "int",
            "long",
            "register",
            "return",
            "short",
            "signed",
            "sizeof",
            "static",
            "struct",
            "switch",
            "typedef",
            "union",
            "unsigned",
            "void",
            "volatile",
            "while",
        };

        while (getData(s) > 0){
                int x = binarySearch(s, key);
                printf("Found: %s\n",  (x >= 0) ? key[x] : "No");
        }
}

int binarySearch(char *s, char* key[]){
        int low, mid, high;
        low = 0, high = MAX - 1;

        while (low <= high){
                mid = (low + high) / 2;
                if (strcmp(s, key[mid]) < 0){
                        high = mid - 1;
                }
                else if (strcmp(s, key[mid]) > 0){
                        low = mid + 1;
                }
                else{
                        return mid;
                }
        }
        return -1;
}