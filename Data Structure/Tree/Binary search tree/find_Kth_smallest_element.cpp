int treeSize(struct TreeNode* head){
        if(!head) return 0;
        return treeSize(head->left) + treeSize(head->right) + 1;
}


int OrderStatistitcs(struct TreeNode* head, int k){
        int s = treeSize(head->left);
        if(k == s+1) {
                return head->val;
        }

        else if(k < s+1){
               return  OrderStatistitcs(head->left, k);
        }

        else{
               return OrderStatistitcs(head->right, k - (s + 1));
        }       
}
