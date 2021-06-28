#include<stdio.h>

int main(){
        int c;
        int nc[58];
        for(int i=65; i<=122; i++) nc[i] = 0;
        
        while((c = getchar()) != EOF){
                if(c>='A' && c<='z'){
                        ++nc[c];
                }
        }

        for(int i=65; i<=122; i++){
        	printf("\n %c: %d", i, nc[i]);

        }
}
