// https://www.youtube.com/watch?v=ZR9f2YIFHD0&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=10
// Define all array as global variable, we can define them as local variable & pass them to the function.
// That will allow us to take variable amount of value.

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MAX 100
int visited[MAX];
int dist[MAX];
vector<int> g[MAX];

void traverse( int nodes){
        for (int i = 1; i <= nodes; i++){
                cout << i << ": ";
                for (int j = 0; j < g[i].size(); j++){
                        cout << g[i][j] << " ";
                }
                cout << endl;
        }
}


void bfs(int source){
        queue<int> q;

        q.push(source);
        visited[source] = 1;
        dist[source] = 0;

        while(!q.empty()){
                int front = q.front();
                cout<<front<<" ";
                q.pop();
                for(int i=0; i<g[front].size(); i++){
                        int next = g[front][i];
                        if(visited[next] == 0){
                                visited[next] = 1;
                                dist[next] = dist[front] + 1;
                                q.push(next);
                        }
                }
        }
}




int main(){
        freopen("file2.txt", "r", stdin);
        int nodes, edges, e1, e2;
        cin>>nodes>>edges;

        for(int i=0; i<edges; i++){
                cin>>e1>>e2;
                g[e1].push_back(e2);
                g[e2].push_back(e1);
        }


        traverse(nodes);
        cout<<"\nBFS: \n";
        bfs(1);
        cout<<"\nDistance from 1: \n";
        for(int i=1; i<=nodes; i++){
                cout<<i<<": "<<dist[i]<<endl;
        }
       
}
