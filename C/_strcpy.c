//For more details, see Dennis Ritchie 125 page
#include<stdio.h>

void _strcpy(char *s, char *t){
        int  i =0;
        while (*t++ = *s++);
}

int main(){
        char* s = "This is Sazin";
        char t[20];  
        _strcpy(s, t);
        printf("%s", t);
}
