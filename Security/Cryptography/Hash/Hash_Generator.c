#include<stdio.h>
#include<string.h>
#include<math.h>
#define PRIME 5564833

void Hashing(char* s){
        int length = strlen(s);
        int i = 0;
        int sum  = 0;
        for(i=0; i<length; i++){
                sum += ((int)(s[i] * pow(10, length -i)) % PRIME);
        }
        printf("%d", sum);
}

int main(int argc, char* argv[]){
        char* string = argv[argc - 1];
        Hashing(string);
}
