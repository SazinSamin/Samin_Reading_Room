//http://www.shafaetsplanet.com/planetcoding/?p=184
#include<iostream>
using namespace std;

int main(){
        freopen("file.txt", "r", stdin);
        int nodes, edges, n1, n2;
        cin>>nodes>>edges;
        int matrix[edges][edges];

        for (int i = 1; i <= edges; i++){
                for (int j = 1; j <= edges; j++){
                        matrix[i][j] = 0;
                }
        }

        for(int i=1; i<=edges; i++){
                cin>>n1>>n2;
                matrix[n1][n2] = 1;
                matrix[n2][n1] = 1;
        }

        cout<<"N ";
        for(int i=1; i<=edges; i++) cout<<i<<" ";
        cout<<endl;
        for(int i=1; i<=edges; i++){
                cout<<i<<" ";
                for(int j=1; j<=edges; j++){
                        cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
        }


}
