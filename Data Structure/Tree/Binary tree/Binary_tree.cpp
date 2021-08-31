//Binary tree implementation 
//through linked list implementation

#include<iostream>
using namespace std;

//Define node
struct Node{
        int data;
        struct Node* right;
        struct Node* left;
};
struct Node* head;

//Get new node and set data.
struct Node* getNode(int data){
	//Dynamic memory allocation fron heap.
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->right = NULL;
        temp->left = NULL;
        return temp;
}


struct Node* insert(int data, struct Node* head){
        struct Node* node = getNode(data);
	
	//If node is null then put the new node there.
        if(head == NULL){
                head = node;
                return head;
        }
	
	//Check data smaller or bigger than root data.
        if(data < head->data){
        	//If small than set to the left side
                head->left = insert(data, head->left);
        }else{
        	//If big than set to the right side
                head->right = insert(data, head->right);
        }

        return head;
}

//Traverse node by In order traversal.
//Inorder traversal
void traverse(struct Node* head){
        if(head == NULL){
                return;
        }

        traverse(head->left);
        cout<<head->data<<" ";
        traverse(head->right);

}


int main(){
        struct Node* node = head;
        node = insert(10, node);
        node = insert(12, node);
        node = insert(13, node);
        node = insert(32, node);
        node = insert(42, node);
        node = insert(1, node);
        node = insert(3, node);
        node = insert(5, node);

        traverse(node);
}
