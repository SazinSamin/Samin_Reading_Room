// follow this link application section.
//https://www.coursera.org/learn/data-structures/lecture/DWPyG/applications



int treeSize(struct TreeNode* head){
        if(!head) return 0;
        return treeSize(head->left) + treeSize(head->right) + 1;
}


int OrderStatistitcs(struct TreeNode* head, int k){
        
        
        // first we measure the size of left subtree
        int s = treeSize(head->left);
        
        
        
        // here (s+1) represent the root node of left subtree. 
        // like if the left subtree size is 3, then we actullay have 3 nodes before the root of the tree.
        // if the Kth position macth with the any node, means we find the Kth node, return the value of the node.
        if(k == s+1) {
                return head->val;
        }

        
        
        // if the Kth element less than the root, we again to the left.
        else if(k < s+1){
               return  OrderStatistitcs(head->left, k);
        }
        
        
        // if the Kth element greater than the root, we again to the right, when we go to right, we already have more 
        // than k amount of node,
        // suppose when we search for 6th element, our tree root node is 4th position, and we have 3 elements in the left subtree
        // of the tree. Then we already right from the 3 + 1 = 4, node.
        // so we subtract that amount of node.
        // because we need to search the 6 - 4 = 2nd element from the root in right subtree.
        // which is 6th element of whole tree.
        else{
               return OrderStatistitcs(head->right, k - (s + 1));
        }       
}
