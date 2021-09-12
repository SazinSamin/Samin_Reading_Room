#include<iostream>
#include<vector>
using namespace std;

// input:

// 5 6
// 1 2
// 1 3
// 1 4
// 4 5
// 2 3
// 5 3


// output from this graph:

// 1: 2 3 4 
// 2: 3 
// 3: 
// 4: 5 
// 5: 3 


void printList(vector<int> v[], int nodes){
        for(int i=1; i<=nodes; i++){
                cout<<i<<": ";
                for(int j=0; j<v[i].size(); j++){
                        cout<<v[i][j]<<" ";
                }
                cout<<"\n";
        }
}


int main(){
        freopen("file3.txt", "r", stdin);
        int nodes, edges, n1, n2;
        cin>>nodes>>edges;
        vector<int> v[nodes+1];

        for(int i=1; i<=edges; i++){
                cin>>n1>>n2;
                v[n1].push_back(n2);
        }

        int x = 10;
        cout<<"\n\nArray: \n";
        printList(v, nodes);

}
