//Below link has height of the tree 
//But also have the creation of generic tree
//https://www.geeksforgeeks.org/height-generic-tree-parent-array/


#include<iostream>
#include<vector>
using namespace std;

//Helper function for displaying data
void display(vector<int> tree[], int length);

//create generic tree
int generic_tree(int array[], int n, vector<int> tree[]){
  
        int root_index;
        for(int i=0; i<n; i++){
                //If array[i] == -1, means it is root node.
                if(array[i] == -1){
                        root_index = i;
                }
                
                //create links between nodes...
                // link between parent - child & child - parent, see the below picture
                else{
                        
                        tree[i].push_back(array[i]);
                        tree[array[i]].push_back(i);
                }
          
                // 0: 1 2 3                       0
                // 1: 0 5 6                 /     |    \
                // 2: 0 7                  1      2     3
                // 3: 0 4                 / \     |      \
                // 4: 3                  5   6    7       4
                // 5: 1 
                // 6: 1 
                // 7: 2 
          
        }
        return root_index;
}


int main(){
        int arary[] = {-1, 0, 0, 0, 3, 1, 1, 2};
        int length = sizeof(arary) / sizeof(arary[0]);
        vector<int> tree[length];
        int root = generic_tree(arary, length, tree);
        display(tree, length);
}



void display(vector<int> tree[], int length){
        for(int i=0; i<length; i++){
                cout<<i<<": ";
                for(int j=0; j<tree[i].size(); j++){
                        cout<<tree[i][j]<<" ";
                }
                cout<<"\n";
        }
}
