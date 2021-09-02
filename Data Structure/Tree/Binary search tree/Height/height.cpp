// The height of a binary tree is the number of edges between the tree's root and its furthest leaf
    // This function compute the height of the tree...
    // We can also just use -1 in base case wher root == NULL, that also produce correct reults.


    //This one is my own defintion of code.
    // We need two base case here...
    // 1. If any node is NULL 
    // 2. Another if a node right & left both subtree is NULL
    // If we just use root == NULL base case we get height + 1
    // bacause when we go deep, without middle base case we go to a position where node is NULL
    // But when we return from there, as we recursively add 1 to compute height
    // we add 1 here also, but there no edges between leaf and NULL pointer.
    // So we add the middle base case to identify the leaf node and return from there
    //But we still need 1st base case,because if a node have only one child, then another would be NULL, 
    //So we have to return from there.
    

    int height(Node* root) {
       // 1st base case
       if(root == NULL){
           return 0;
       }
       //2nd base case 
       if(root->left == NULL && root->right == NULL){
           return 0;
       }
       return 1 + max(height(root->left), height(root->right));
    }
