//This will return height + 1
//So we have to -1 in calling function from the value we get from Height(this) function.
//See the height.cpp 

int Height(struct Node* head){
        if(head == NULL){
                return 0;
        }
        return 1 + max(Height(head->right), Height(head->left));
}

