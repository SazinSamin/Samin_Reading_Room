// This below link video made for graph, but also work same for generic tree
// https://www.youtube.com/watch?v=ZR9f2YIFHD0&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=11
// The array we used to build the tree, this image can found in -> https://www.geeksforgeeks.org/height-generic-tree-parent-array/
// also we draw here.
//                      0
//                  /   |   \
//                1     2     3
//              /   \   |       \
//             5     6  7         4


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// To know about generic tree creation visit this link -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Data%20Structure/Tree/Generic%20Tree/generic_tree_creation.cpp
// Helper function for creating generic tree...
int generic_tree(int array[], int n, vector<int> tree[]);


int bfs(vector<int> g[], int visited[], int distances[], int source){
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        distances[source] = 0;
        int max = -99;

        while(!q.empty()){
                int current = q.front();
                q.pop();
                for(int i=0; i<g[current].size(); i++){
                        int next = g[current][i];
                        if(visited[next] == 0){
                                visited[next] = 1;
                                distances[next] = distances[current] + 1;
                                if(distances[next] > max){
                                        max = distances[next];
                                }
                                q.push(next);
                        }
                }
        }
        return max;
}



int main(){
        int array[] = {-1, 0, 0, 0, 3, 1, 1, 2};
        int length = sizeof(array) / sizeof(array[0]);

        vector<int> tree[length];
        int root = generic_tree(array, length, tree);
        int visited[length+1];
        int distances[length+1];
        for(int i=0; i<length; i++){
                visited[i] =  0;
                distances[i] = 0;
        }

        int height = bfs(tree, visited, distances, root);
        cout<<"\nHeight of tree: "<<height;
}


int generic_tree(int array[], int n, vector<int> tree[]){
        int root_index;
        for(int i=0; i<n; i++){
                if(array[i] == -1){
                        root_index = i;
                }else{
                        tree[i].push_back(array[i]);
                        tree[array[i]].push_back(i);
                }
        }
        return root_index;
}
