#include<iostream>
using namespace std;


int findHeigh(int parent[], int visited[], int height[], int n, int node){
        if(parent[node] == -1){
                visited[node]  = 1;
                return 0;
        }

        if(visited[node]){
                return height[node];
        }

        visited[node] = 1;

        return 1 + findHeigh(parent, visited, height, n, parent[node]);


}


int Height(int parent[], int n){
        int visited[n];
        int height[n];
        int Maxmax = -1;
        int nodeH;

        for(int i=0; i<n; i++){
                visited[i] = 0;
                height[i] = 0;
        }


        for(int i=0; i<n; i++){
                int vv = visited[i];
                if(!visited[i]){
                        nodeH = findHeigh(parent, visited, height, n, i);
                        height[i] = nodeH;
                }
                Maxmax = max(Maxmax, nodeH);
        }

        return Maxmax;
}


int main(){
        int parent[] = {-1, 0, 0, 0, 3, 1, 1, 2};
        int length = sizeof(parent) / sizeof(parent[0]);
        printf("\nHeight of the tree: %d", Height(parent, length));

}
