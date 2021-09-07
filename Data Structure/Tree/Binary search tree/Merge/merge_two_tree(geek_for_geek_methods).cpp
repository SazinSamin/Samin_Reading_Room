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


struct Node* mergeTree(struct Node* head1, struct Node* head2){
  
        // if head1 or head2 == NULL, means one tree node is NULL, then we return other tree node.
        // other tree may have node there or not, if there is node then that node & it's descendent also insert to our merge node.
        // if not, like other tree has no node there means NULL, also automatically return from there.
        
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
  
  
  
        // if tree1 & tree2 both have node then we add two tree same position node value,
        // save that value to the tree1.
        head1->data = head1->data + head2->data;
  
        // go to left of both trees.
        head1->left = mergeTree(head1->left, head2->left);
        // go to right of both trees.
        head1->right = mergeTree(head1->right, head2->right);
  
        // in head1 or tree1, we add & save our two trees nodes value, now return that head1 with value.
        return head1;
}

