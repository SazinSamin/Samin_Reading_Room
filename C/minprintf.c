//This is implementaion of printf funciton
//from Denis Ritche book
//before procced see this vedio,
//https://www.youtube.com/watch?v=WfMWE7EAGyc


#include <stdarg.h>
#include<stdio.h>

void minprintf(char* string, ...){

        va_list ap;
        char *p, *sval;
        int ival; double dval;

        va_start(ap, string);

        for(p = string; *p; p++){
                if(*p != '%'){
                        putchar(*p);
                        continue;
                }

                switch(*++p){
                        case 'd':
                                ival = va_arg(ap, int);
                                printf("%d", ival);
                                break;
                        case 'f':
                                dval = va_arg(ap, double);
                                printf("%d", ival);
                                break;
                        case 's':
                                for(sval = va_arg(ap, char*); *sval; sval++){
                                        putchar(*sval);
                                }
                                break;
                        default:
                                putchar(*p);
                                break;
                }
                va_end(ap);
        }

        
}

int main(){
        minprintf("val: %d", 5);
}
