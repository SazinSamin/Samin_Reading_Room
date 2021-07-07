#include <stdio.h>
#include <string.h>
#define KEYMAX 32

struct keyword{
        char word[30];
        int occur;
};

int binarySearch(char* word, struct keyword key[]);
int getData(char* s){
        char c; int i = 0;
        while((c = getchar()) != '\n'){
                s[i++] = c;
        }
        s[i] =  '\0';
        return (i > 0) ? 1 : -1;
}

int main(){
        struct keyword key[32] = {
            "auto",
            0,
            "break",
            0,
            "case",
            0,
            "char",
            0,
            "const",
            0,
            "continue",
            0,
            "default",
            0,
            "do",
            0,
            "double",
            0,
            "else",
            0,
            "enum",
            0,
            "extern",
            0,
            "float",
            0,
            "for",
            0,
            "goto",
            0,
            "if",
            0,
            "int",
            0,
            "long",
            0,
            "register",
            0,
            "return",
            0,
            "short",
            0,
            "signed",
            0,
            "sizeof",
            0,
            "static",
            0,
            "struct",
            0,
            "switch",
            0,
            "typedef",
            0,
            "union",
            0,
            "unsigned",
            0,
            "void",
            0,
            "volatile",
            0,
            "while",
            0,
        };
        char s[30];
        while(getData(s) >= 0){
                int x = binarySearch(s, key);
                key[x].occur++;
                printf("\n%d\n", x);
        }

        printf("\nOccurance: ");

        for(int i=0; i<32; i++){
                printf("\n%s: %d ", key[i].word, key[i].occur);
        }
}

int binarySearch(char s[], struct keyword key[]){

        int mid, low, high;
        low = 0; high = KEYMAX -1;
        char* midkey;

        while(low <= high){
                mid = (low + high) / 2;
                midkey = key[mid].word;
                if(strcmp(s, key[mid].word) < 0){
                        high = mid -1;
                }else if(strcmp(s, key[mid].word) > 0){
                        low = mid + 1;
                }else{
                        return mid;
                }
        }
        return -1;
}