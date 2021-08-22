#include<stdio.h>
#include<string.h>

int binarySearch(char *s, char *key[]){
        int low =  0;
        int high = 32 - 1;
        

        while(low <= high){
                int mid = (low + high) / 2;
                char *mx =  key[mid];
                if(strcmp(s, key[mid]) < 0){
                        high = mid - 1;
                }else if(strcmp(s, key[mid]) > 0){
                        low = mid + 1;
                }else{
                        return mid;
                }
        }

        return -1;
}

int main(){
        char *key[32] = {
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

        char s[] = "return";
        printf("Found at position: %d", binarySearch(s, key));
}
