//http://www.shafaetsplanet.com/planetcoding/?p=211
//https://www.youtube.com/watch?v=iySJfHhYXw4&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=5
#include<iostream>
#include<vector>
using namespace std;
vector<int> graph[5];

void printGraph(vector<int> g[], int l){
        cout<<"\nGraph: "<<endl;
        for(int i=0; i<=l; i++){
                cout<<"Index "<<i<<": ";
                for(int j=0; j<g[i].size(); j++){
                        cout<<g[i][j]<<" ";
                }
                cout<<endl;
        }
}


int main(){
        freopen("file.txt", "r", stdin);
        int nodes, edeges, n1, n2;
        cin>>nodes>>edeges;
        for(int i=0; i<edeges; i++){
                cin>>n1>>n2;
                graph[n1].push_back(n2);
                graph[n2].push_back(n1);
        }

        printGraph(graph, edeges);

}
