// find the rank of element x in the tree,
// means our given data index in the sorted list of elements of the tree.
// we here use 0th based index.
// Like this tree

//                              5
//                            /  \
//                          3     8                          
//                         / \     \
//                        1   2     10

// if we talk about the element whose value is 8 in this tree
// then it's rank is 5, means its index is 5th in the sorted list of elements of this tree.



int rank_of_tree(struct TreeNode* root, int data){
        
        // intialize the rank as 0.
        int rank = 0;
        
        // while root not encounter NULL.
        while(root){
                
                // if the data less than the root we go to left subtree.
                if(data < root->data){
                        root = root->left;
                        
                        
                // if the data greater than the root we go to right subtree.        
                }else if(data > root->data){
                        
                        // when we go to the right of the tree, then we have to also count the left subtree size with root node.
                        // because we are going (size of left subtree + root node) far from the current node.
                        // also we can think as, if we go to a node right subtree, then the node's left subtree & the node itselt
                        // ahead of any node of node's right subtree.
                        rank += 1 + treeSize(root->left); 
                        
                        // go to the right subtree.
                        root =  root->right;
                        
                        
                }else{
                        // here we add previous rank count + the size of the our given match node left subtree
                        // as in binary search tree, if a node has left subtree, then all the nodes in it's left subtree
                        // remain ahead of it.
                        return rank + treeSize(root->left); 
                }
        }
        
        // if given node data doesn't find the in tree, return -1 to indicate that.
        return -1;
}
