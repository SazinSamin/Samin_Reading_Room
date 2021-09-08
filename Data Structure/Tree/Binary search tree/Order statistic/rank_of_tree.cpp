// I donw


int rank_of_tree(struct TreeNode* root, int data){
        int rank = 0;
        while(root){
                if(data < root->data){
                        root = root->left;
                }else if(data > root->data){
                        rank += 1 + treeSize(root->left); 
                        root =  root->right;
                }else{
                        rank += treeSize(root->left);
                        return rank;
                }
        }
        return -1;
}
