//For more details, see Dennis Ritchie 126 page
#include<stdio.h>

int _strcmp(char *s, char *t){
        while(*s++ == *t++){
                if(*s == '\0'){
                        return 0;
                }
        }
        return *--s - *--t;
}

int main(){
        char* s = "Sazin";
        char *t = "Sazun";  
        printf("\n%d", _strcmp(s, t));
}
