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
        int rank = 0;
        while(root){
                if(data < root->data){
                        root = root->left;
                }else if(data > root->data){
                        rank += 1 + treeSize(root->left); 
                        root =  root->right;
                }else{
                        return rank + treeSize(root->left); 
                }
        }
        return -1;
}
