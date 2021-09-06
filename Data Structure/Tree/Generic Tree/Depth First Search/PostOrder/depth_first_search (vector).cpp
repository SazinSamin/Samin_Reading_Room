//https://www.youtube.com/watch?v=kMS5Fxjrd6E&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=7


#include<iostream>
#include<vector>
using namespace std;

//                      0
//                  /   |   \
//                1     2     3
//              /   \   |       \
//             5     6  7         4




//helper function for inserting to the tree.
int generic_tree(int array[], int n, vector<int> tree[]);

//Function for deapth_first_search
void dfs(vector<int> tree[] ,int source, int visited[]){
  
        //mark the node as visited
        visited[source] = 1;
        
  
        //run a loop for visit all child nodes of this parent not.
        for(int i=0; i<tree[source].size(); i++){
          
                //if we corresponding node visited array value is 0, means we don't visit this node yet. 
                if(visited[tree[source][i]] == 0){
                  
                        // so make another dfs call to visit the node.
                        dfs(tree, tree[source][i], visited);
                }
        }
        //read the data.
        cout<<source<<" ";
}


int main(){
        int arary[] = {-1, 0, 0, 0, 3, 1, 1, 2};
        int length = sizeof(arary) / sizeof(arary[0]);
  
        //we use array vector for store the node information.
        vector<int> tree[length];
        
        int root = generic_tree(arary, length, tree);
        
        //array to keep track of we already visited a node or not..
        //make all node value as 0, because at first we don't visit any node yet.
        int visited[length];
        for(int i=0; i<length; i++) visited[i] = 0;
  
  
        dfs(tree, root, visited);
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
