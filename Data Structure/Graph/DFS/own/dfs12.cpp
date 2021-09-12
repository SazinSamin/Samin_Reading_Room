#include <iostream>
#include <vector>
using namespace std;


void printGraph(vector<int> g[], int l){
        cout << "\nGraph: " << endl;
        for (int i = 0; i <= l; i++){
                cout << "Index " << i << ": ";
                for (int j = 0; j < g[i].size(); j++){
                        cout << g[i][j] << " ";
                }
                cout << endl;
        }
}

int count = 0;

void dfs(vector<int> graph[], int n, int visited[]){
        if (visited[n] == 1){
                return;
        }
        else{
                visited[n] = 1;
                for (int i = 0; i < graph[n].size(); i++){
                        dfs(graph, graph[n][i], visited);
                }
        }
}

void check(vector<int> graph[], int edges, int visited[]){
        for (int i = 0; i < edges; i++){
                if (visited[i] == 1){
                        //return;
                }
                else{
                        
                        int v = graph[i].size();
                        //cout<<"\nVector size: "<<v;
                        if(graph[i].size()){
                                count++;
                                dfs(graph, i, visited);
                        }
                }
        }
}

int main(){
        freopen("file2.txt", "r", stdin);
        int nodes, edeges, n1, n2;
        cin >> nodes >> edeges;

        vector<int> graph[nodes * 2];

        for (int i = 0; i < edeges; i++){
                cin >> n1 >> n2;
                graph[n1].push_back(n2);
                graph[n2].push_back(n1);
        }

        edeges+=7;

        printGraph(graph, edeges);

        int visited[edeges];
        for(int i=0; i<edeges+1; i++) visited[i] = 0;

        check(graph, edeges, visited);
        cout << "\nVisited: \n";
        for (int i = 0; i < edeges+1; i++){
                cout <<i<<": "<< visited[i] <<endl;
        }
        cout << "\nCount: " << count;


        cout<<"\nSize of vector: "<<endl;
        for(int i=0; i<14; i++){
                cout<<i<<": "<<graph[i].size()<<endl;
        }
}
