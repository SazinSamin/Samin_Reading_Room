#include<iostream>
#include<vector>
using namespace std;

// This code doesn't work with big cases, beacuse the recursion will lead to stack overflow, for big input use
// bfs to find the height -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Data%20Structure/Tree/Generic%20Tree/Height/height(bfs).cpp

// To understand how the given array represent the tree, see the README.md file of generic tree folder.
// In this code we get the hieght of tree by traversing from each node to it's parent node.
// & return the distance from that node to parent node
// Which "node to distant" is most, that will be the height of the tree.



// This function work as,
// suppose the first call of this function from main as array & array[i] = 0
// In 0 position we see 4, means who hold the number 4 position in array is the parent of 0,
// Here we found 1, so 1 is 0's parent, now we again call Height function with 1, 
// In 1 position we found -1, -1 indicate that it is the tree root node.
// Now we stop here by base case and begin to return,
// as we return back from the where we stop, we use programe stack to count the distant from that given node to tree root.
// by adding 1 each time.


int Height(int array[], int pos){
        
        // When position == -1, indicate that this is parent node, so we return back from there.
        if(pos == -1){
                return 1;
        }
        
        //each time we call the height function with the array position it belong, for go to the it parent node until we hit -1
        return 1 + Height(array, array[pos]);
}


int main(){
        int array[] = {4, -1, 4, 1, 1};
        int n = sizeof(array) / sizeof(array[0]);
        
        int max = -1;
        int result;
        
        // each time we call the each array node for measure the distance between that node to tree root
        // by traversing the array. 
        
        for(int i=0; i<n; i++){
                result = Height(array, array[i]);
                // the result or a distant more than the previous one, save the lastest far most distance.
                if(result > max){
                        max = result;
                }
        }
        cout<<max;
}
