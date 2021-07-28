//http://www.shafaetsplanet.com/planetcoding/?p=211
//https://www.youtube.com/watch?v=iySJfHhYXw4&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=5
#include<iostream>
#include<vector>
using namespace std;
#define MAX 100

void printGraph(vector<int> v[], int n){
        cout<<"\nGraph: "<<endl;
        for(int i=0; i<n; i++){
                cout<<i<<": ";
                for(int j=0; j<v[i].size(); j++){
                        cout<<v[i][j]<<" ";
                }
                cout<<endl;
        }
}

void printVector(vector<int> v[], int n){
        cout<<"\nCost: "<<endl;
        for(int i=0; i<n; i++){
                cout<<i<<": ";
                for(int j=0; j<v[i].size(); j++){
                        cout<<v[i][j]<<" ";
                }
                cout<<endl;
        }
}

int main(){
        vector<int> n[MAX];
        vector<int> c[MAX];
        freopen("file.txt", "r", stdin);
        int nodes, edges;
        cin>>nodes>>edges;
        for(int i=0; i<edges; i++){
                int n1, n2;
                cin>>n1>>n2;
                n[n1].push_back(n2);
                c[n1].push_back(1);
        }
        printGraph(n, edges);
        printVector(c, edges);
}
