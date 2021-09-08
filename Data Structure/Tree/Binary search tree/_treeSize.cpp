int treeSize(struct TreeNode* head){
  
        // if head == NULL, means we are in the below the leaf node, where there is no node, so return 0.
        if(!head) return 0;
        
        // recursively go for sleft subtree & right subtree, 
        // we get the size of left subtree & right subtree, add two subtree sizes, and +1 for current node.
        // whose left & right subtree is called.
        return treeSize(head->left) + treeSize(head->right) + 1;
}
