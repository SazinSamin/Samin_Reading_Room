// Check binary tree or not by inroder traversal
// we know in inorder traversal of depth first serach in a binary tree always result a sorted order value.
// So we can easily check that if our binary tree is BST or not by keep track of previous traversed node value.

// this method is sometime give wrong result, in like below tree 
//            4
//          /   \
//         2     5
//        / \
//       1   3


bool isBST(struct Node* head){
        
        // declear node name "prev", to keep track of previous node of current node.
        static struct Node* prev = NULL;
        
        // If current node == NULL return true.
        if(!head) return true;

        // traverse the left node
        isBST(head->left);
  
        // if prev node == NULL, which is initially we set
        // this means we don't yet save any value to prev node, so can't compare this with current value.
        // if prev != NULL, we have a prev value
        // If the previous value greater than the current value, which break the BST condition, so
        // we return false from there.
        if(prev != NULL && head->data < prev->data){
                return false;
        }
        
        // if previous value not greater than current value
        // save the current node value to previsous.
        prev = head;
  
        // traverse the right node
        isBST(head->right);
  
        // if all ok, return true.
        return true;
}

      
