#include<iostream>
using namespace std;
#define MAX 100+1
int Parent[MAX];
int Rank[MAX];

void init(){
        for(int i=1; i<=MAX; i++){
                Parent[i] = i;
                Rank[i] = 1;
        }
}

int find(int u){
        if(Parent[u] == u) return u;
        return find(Parent[u]);
}


void Union(int v, int u){
        int p1 = find(v);
        int p2 = find(u);
        int r1 = Rank[p1];
        int r2 = Rank[p2];

        if(p1 == p2){
                return;
        }

        if(r1 > r2){
                Parent[p2] = p1;
                return;
        }

        if(r2 > r1){
                Parent[p1] = p2;
                return;
        }

        Parent[p2] = p1;
        Rank[p1]++;
}

int main(){
        init();
        Union(1, 2);
        Union(2, 3);
        Union(3, 4);

        Union(5, 6);
        Union(6, 7);
        Union(7, 8);

        Union(1, 5);


        cout<<"Root Parent"<<endl;
        for(int i=1; i<=8; i++){
                cout<<find(i)<<endl;
        }
        
        cout<<"Regional Parent: "<<endl;
        for(int i=0; i<8; i++){
                cout<<Parent[i]<<" ";
        }

        cout<<"\nRank"<<endl;
        for(int i=0; i<8; i++){
                cout<<Rank[i]<<" ";
        }
}

