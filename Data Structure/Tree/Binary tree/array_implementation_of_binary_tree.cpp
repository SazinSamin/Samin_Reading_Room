//Array implementation of binary tree

#include<iostream>
using namespace std;
int tree[100];

void set_root(int k){
        //Check root already exits or not.
        if(tree[0] != '\0'){
                cout<<"\nTree has already a root";
        }else{
                tree[0] = k;
        }
}

void set_right(int k, int p){
        //Before set the child check the parent exits or not.
        if(tree[p] == '\0'){
                cout<<"\nNo parent in this position";
        }else{
                tree[(p * 2) + 1] = k;
        }
}

void set_left(int k, int p){
        //Before set the child check the parent exits or not.
        if (tree[p] == '\0'){
                cout << "\nNo parent in this position";
        }
        else{
                tree[(p * 2) + 2] = k;
        }
}

void traverse(){
        
        for(int i=0; i<10; i++){
                cout<<tree[i]<<" ";
        }
}

int main(){

        set_root(12);
        set_right(13, 0);
        set_left(14, 0);
        set_right(11, 1);
        set_right(33, 1);

        traverse();

}
