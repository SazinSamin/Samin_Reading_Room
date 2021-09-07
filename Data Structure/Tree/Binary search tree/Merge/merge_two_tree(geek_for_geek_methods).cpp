// https://www.geeksforgeeks.org/merge-two-binary-trees-node-sum/
// This merge completely merge two tree by add every poistion nodes value from two different tree.

//               Input:

//     Tree 1            Tree 2                  
//       2                 3                             
//      / \               / \                            
//     1   4             6   1                        
//    /                   \   \                      
//   5                     2   7                  

// Output: Merged tree:
//         5
//        / \
//       7   5
//      / \   \ 
//     5   2   7


struct Node* mergeTree(struct Node* tree1, struct Node* tree2){
  
        // if tree1 or tree2 == NULL, means one tree current node is NULL, then we return other tree node.
        // other tree may have there node or not, if there is node then that node & it's descendent return from this position
        // automatically insert to the corresponding postion of our merge node.
        // if not, like other tree has also no node there, means NULL, then NULL return from there.
        
        if( ! tree1) return tree2;
        if( ! tree2) return tree1;
  
  
  
        // if tree1 & tree2 both have node at same position, then we add two tree same position node value,
        // save that value to the tree1.
        tree1->data += tree2->data;

        // go to left of both trees.
        tree1->left = mergeTree(tree1->left, tree2->left);
        // go to right of both trees.
        tree1->right = mergeTree(tree1->right, tree2->right);

        // in tree1, we add & save our two trees nodes value, now return that tree1 with value.
        return tree1;
}


// As this is a recursive procedure, so think all recursivly, you will understand easily....
