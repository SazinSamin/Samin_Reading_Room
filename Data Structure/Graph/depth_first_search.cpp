//https://www.youtube.com/watch?v=kMS5Fxjrd6E&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=6
//I use vector & visited array as local variable to manipulate as much as data you want.......
#include<iostream>
#include<vector>
using namespace std;


void traverseGraph(vector<int> v[], int edges){
        for(int i=0; i<edges; i++){
                cout<<i<<": ";
                for(int j=0; j<v[i].size(); j++){
                        cout<<v[i][j]<<" ";
                }
                cout<<endl;
        }
}       


//depth first search
void dfs(int v[], vector<int> g[], int source){
        v[source] = 1;
        for(int i=0; i<g[source].size(); i++){
                int next = g[source][i];
                if(v[next] == 0){
                        dfs(v, g, next);
                }
        }
}


int main(){
        //freopen("file.txt", "r", stdin);
        int nodes, edges, e1, e2;
        cin>>nodes>>edges;
        
        vector<int> g[edges];
  
        //Declear array name "visited" to store the information that a node before visited or not.
        int visited[edges];
        //set all value to "0" to ensure you don't visit any node before.
        for(int i=0; i<edges; i++) visited[i] = 0;

        for(int i=0; i<edges; i++){
                cin>>e1>>e2;
                g[e1].push_back(e2);
                g[e2].push_back(e1);
        }

        traverseGraph(g, edges);
        dfs(visited, g, 0);

        cout<<"\nVisite check: ";
        for(int i=0; i<edges; i++){
                cout<<visited[i]<<" ";
        }
}
