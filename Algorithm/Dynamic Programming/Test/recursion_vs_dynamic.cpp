//Test case from HackerRank test case(test case 12)
//14
//4 47 98
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include<unistd.h>
using namespace std;
using namespace std::chrono;
int memo[10000];


int find_nth_term_r(int n, int a, int b, int c);
int find_nth_term_d(int n, int a, int b, int c);



int main(){
        int times = 0;
        auto start = high_resolution_clock::now();
        int n, a, b, c;

        scanf("%d %d %d %d", &n, &a, &b, &c);
        while (times < 20){
                for(int i=0; i<10000; i++){
                        memo[i] = -1;
                }

                //Recursoin programe execution time count...
                auto start_r = high_resolution_clock::now();
                int ans_r = find_nth_term_r(n, a, b, c);
                auto stop_r = high_resolution_clock::now();
                auto duration_r = duration_cast<nanoseconds>(stop_r - start_r);

                auto start_d = high_resolution_clock::now();
                int ans_d = find_nth_term_d(n, a, b, c);
                auto stop_d = high_resolution_clock::now();
                auto duration_d = duration_cast<nanoseconds>(stop_d - start_d);

                //Dynamic programe execution time count...
                cout<<"Recursive "<<"         "<<"Dynamic"<<endl;
                cout<<" "<<duration_r.count()<<"               "<<duration_d.count()<<endl;
                sleep(1);
                times++;
        }
        return 0;
}

//Recursive procedure...
int find_nth_term_r(int n, int a, int b, int c){
        if (n == 1)  return a;
        if (n == 2) return b;
        if (n == 3) return c;
        return find_nth_term_r(n - 1, a, b, c) + find_nth_term_r(n - 2, a, b, c) + find_nth_term_r(n - 3, a, b, c);
}

//Dynamic procedure...
int find_nth_term_d(int n, int a, int b, int c){
        if (n == 1) return a;
        if (n == 2) return b;
        if (n == 3) return c;
        if (memo[n] != -1){
                return memo[n];
        }
        memo[n] = find_nth_term_d(n - 1, a, b, c) + find_nth_term_d(n - 2, a, b, c) + find_nth_term_d(n - 3, a, b, c);
        return memo[n];
}
