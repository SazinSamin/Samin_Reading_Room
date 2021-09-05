To delete a binary, if we just use "delete head", then instead of deleting the whole tree, it will just free the head or root pointer
of the tree, but the other pointer of the tree still allocated in the memory because dynamic memory allocation or explicitly 
allocated memmory by user is allocated memory in the heap section, which have to explicitly freed by user. 
So, this leads to memory leak.
To avoid this situation we have free every pointer or every node from the tree.
And as we know postorder depth first traversal of binary tree, start traversing the tree from the leaf node and goes up to the tree
by traversing child's parent node.
This procedure use recursion for that.
