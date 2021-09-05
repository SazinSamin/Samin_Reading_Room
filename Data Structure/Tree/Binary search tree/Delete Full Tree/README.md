To delete a binary, if we just use "delete head", then instead of deleting the whole tree, it will just free the head or root pointer
of the tree, but the other pointers of the tree's nodes still allocated in the memory because dynamic memory allocation or explicitly 
allocated memmory by user is allocated memory in the heap section, which have to explicitly freed by user. 
So, this leads to memory leak.  

To avoid this situation we have free every pointers or every nodes from the tree.
And as we know postorder depth first traversal of binary tree, start traversing the tree from the leaf node and goes up to the tree
by traversing child's parent node.  
This procedure use recursion for that.  

Another topic, if we just use simple recursion delete the tree's nodes, but doesn't change the root to NULL, we have still access to the
memory location. So we need to change root or head to NULL, by define another function & call the postorder like delete function from  there.  

See delete(head_to_NULL).cpp  

Reference -> [GeeksForGeeks](https://www.geeksforgeeks.org/write-a-c-program-to-delete-a-tree/)
