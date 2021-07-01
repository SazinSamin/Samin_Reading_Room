#include<stdio.h>
#include<ctype.h>

double atof(char s[]){
        double power, val;
        int sign, i;
        for(i=0; isspace(s[i]) ; i++);
        sign = (s[i] == '-') ? -1 : 1;
        if(s[i] == '+' || s[i] == '-'){
                s[i++];
        }
        for(val = 0.0; isdigit(s[i]); i++){
                val = val * 10.0 + (s[i] - 48);
        }
        if(s[i] == '.'){
                s[i++];
        }
        
        for(power = 1.0; isdigit(s[i]); i++){
                val = val * 10.0 + (s[i] - 48);
                power *= 10;
        }

        return sign * (val / power);

}



int main(){
        int i =0;
        char s[1000];
        char c;
        while((c = getchar()) != EOF){
                s[i++] = c;
        }
        printf("\nInteger: %f", atof(s));
}