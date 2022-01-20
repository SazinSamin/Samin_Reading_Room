// https://www.freecodecamp.org/news/euclidian-gcd-algorithm-greatest-common-divisor/

#include<stdio.h>

int GCD(int a, int b){
        int r = a % b;
        if(r <= 0){
                return b;
        }
        a = b;
        b = r;
        return GCD(a, b);
}


int main(){
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        printf("%d", GCD(n1, n2));
        
}
