#include<iostream>
#include<vector>
#include<queue>
#define INF 99999999
using namespace std;

struct Node{
        int data;
        int cost;
};

void printNode(vector < Node > graph[], int nodes);



class cmp{
        public:
                bool operator()(Node &A, Node &B){
                        if(A.cost > B.cost) return true;
                        return false;
                }
};




void dijkstra(vector < Node > graph[], int source, int costArray[], int visited[]){
        priority_queue < Node, vector < Node >, cmp > PQ;
        PQ.push({source, 0});

        while(!PQ.empty()){
                Node current = PQ.top();
                PQ.pop();
                
                int currData = current.data;
                int currCost = current.cost;


                if(visited[currData] == 1) continue;
                visited[currData] = 1;
                costArray[currData] = currCost;

                for(int i=0; i<graph[currData].size(); i++){
                        Node next = graph[currData][i];
                        
                        int nextData = next.data;
                        int nextCost = next.cost;

                        if(visited[nextData] == 1) continue;

                        PQ.push({nextData, nextCost + currCost});

                }
        }
}



int main(){
        freopen("file3.txt", "r", stdin);
        int nodes, edges, n1, n2, w;
        cin >> nodes >> edges;

        // If the nodes value start from 1 then we have to do nodes + 1.
        nodes += 1;

        int costArray[nodes];
        int visited[nodes];

        for(int i=0; i<nodes; i++){
                costArray[i] = INF;
                visited[i] = 0;
        }


        vector < Node > graph[nodes]; 

        for(int i=0; i<edges; i++){
                cin >> n1 >> n2 >> w;
                graph[n1].push_back({n2, w});
        }

        // as we add node+1, so here we minus that, letter write more desciption.
        //printNode(graph, nodes - 1);

        int source = 3;

        dijkstra(graph, source, costArray, visited);
        for(int i=1; i<nodes; i++){
                if(costArray[i] == INF)
                        cout << source << "-" << i << " distance: INF"  << endl;
                else
                        cout << source << "-" << i << " distance: " << costArray[i] << endl;
        }

}





void printNode(vector < Node > graph[], int nodes){

        for(int i=1; i<=nodes; i++){
                cout << i << ": ";
                int s =  graph[i].size();
                for(int j=0; j<graph[i].size(); j++){
                        cout << graph[i][j].data << " ";
                }
                cout<<"\n";
        }
        


}
