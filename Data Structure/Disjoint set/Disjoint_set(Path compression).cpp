#include<iostream>
using namespace std;

#define MAX 100
//Declear array for parent information.
int parent[MAX];

//Make set by setting itself as it parent.
void makeSet(int u){
        parent[u] = u;
}

//Set all elements parents.
void init(){
        for(int i=1; i<=8; i++){
                makeSet(i);
        }
}

//Find a element belongs to which set 
//and return it's parent.
//Path compression also add here
//First time visit all the path
//Then set same parent which
//belong to same root parent or subtree.
int find(int u){
        if(u == parent[u]) return u;
        return parent[u] = find(parent[u]);
}

//If two elements parent are same
//means they belongs to same set
bool isSameSet(int u, int v){
        int p = find(u);
        int q = find(v);
        return (p == q);
}

//By finding two elements parent
//Combine two set
void Union(int u, int v){
        int p = find(u);
        int q = find(v);

        if(p != q){
                parent[q] = p;
        }
}



int main(){
        init();
        Union(7, 8);
        Union(6, 7);
        Union(5, 6);
        Union(4, 5);
        Union(3, 4);
        Union(2, 3);
        Union(1, 2);

        
        cout<<find(8)<<endl;
        cout<<find(2)<<endl;
        cout<<find(1)<<endl;
}


