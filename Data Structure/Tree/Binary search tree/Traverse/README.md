#### Inorder traversal
    In a binary search tree ordered such that in each node the key is greater than all keys in its left subtree and less than all keys in 
    its right subtree, in-order traversal retrieves the keys in ascending sorted order.   

    In a binary search tree ordered such that in each node the key is greater than all keys in its left subtree and less than all keys in
    its right subtree, reverse in-order traversal retrieves the keys in descending sorted order.   
    

Reverse in-order, RNL  
Recursively traverse the current node's right subtree.  
Visit the current node.  
Recursively traverse the current node's left subtree.  



#### Preorder traversal 
      - is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on of an expression tree.  
      -  
      It read the node data from top to bottom.

#### Postorder traversal
      - Postorder traversal is used to delete the tree. 
      -  
      It read the node data from bottom to top.
      
      
[Wiki link-> Tree Traverse](https://en.wikipedia.org/wiki/Tree_traversal)  


Depth first search also called Level-Order-Traversal, but the word DSF mainly used for graph as graph may have cycle, so if we visit a  
node once, we don't visit that node again. If we visit that node again, then we can fall on infinte loop in graph.
So, DFS & BFS word mainly used for Graph.
In tree the DFS also we can called as Level-Order-Traversal.




 
