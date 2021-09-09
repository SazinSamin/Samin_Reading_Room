#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* left, *right;
};

struct Node* getNode(int data){
        struct Node* temp = new Node();
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
}

struct Node* rightRotate(struct Node* x){
        struct Node* y = x->left;
        x->left = y->right;
        y->right = x;
        return y;
}


struct Node* leftRotate(struct Node* x){
        struct Node* y = x->right;
        x->right = y->left;
        y->left = x;
        return y;
}


struct Node* splay(struct Node* root, int key){
        if(root == NULL || root->data == key){
                return  root;
        }

        if(key < root->data){

                if(root->left == NULL){
                        return root;
                }

                if(key < root->left->data){

                        root->left->left = splay(root->left->left, key);

                        root = rightRotate(root);

                }else if(key > root->left->data){

                        root->left->right = splay(root->left->right, key);

                        if(root->left->right != NULL){
                                root->left = leftRotate(root->left);
                        }        
                }

                return (root->left == NULL) ? root : rightRotate(root);

        }else{
                
                if(root->right == NULL){
                        return root;
                }

                if(key > root->right->data){

                        root->right->right = splay(root->right->right, key);

                        root = leftRotate(root);
                
                }else if(key < root->right->data){

                        root->right->left = splay(root->right->left, key);

                        if(root->right->left != NULL){

                                root->right = rightRotate(root->right);

                        }

                }

                return (root->right == NULL) ? root : leftRotate(root);
        }
}




struct Node* search(struct Node* root, int key){
        return splay(root, key);
}





void inroder(struct Node* head){
        if(head){
                cout << head->data << " ";
                inroder(head->left);
                inroder(head->right);
        }
}




int main(){
        Node *root = getNode(100);
        root->left = getNode(50);
        root->right = getNode(200);
        root->left->left = getNode(40);
        root->left->left->left = getNode(30);
        root->left->left->left->left = getNode(20);
        root->left->left->left->left->left = getNode(10);
        root->left->left->left->left->left->left = getNode(5);
        root->left->left->left->left->left->left->left = getNode(1);


        cout<<"\n Before: ";
        inroder(root);

        int array[] = {1, 5, 10, 20, 30, 40, 50, 100, 200};

        for(int i=0; i<9; i++){
                root = search(root, array[i]);
                cout<<"\n";
                inroder(root);
        }
}
