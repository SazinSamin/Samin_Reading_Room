#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* left;
        struct Node* right;
        int height;
};

struct Node* getNode(int data);
int max(int a, int b);
int height(struct Node* head);
void preOrder(struct Node* head);


struct Node* rightRotation(struct Node* head){
        struct Node* newHead = head->left;
        struct Node* ex = newHead->right;

        head->left = ex;
        newHead->right = head;

        head->height = max(height(head->left), height(head->right)) + 1;
        newHead->height = max(height(newHead->left), height(newHead->right)) + 1;

        return newHead;
}

struct Node* leftRoation(struct Node* head){
        struct Node* newHead = head->right;
        struct Node* ex = newHead->left;

        head->right = ex;
        newHead->left = head;

        head->height = max(height(head->left), height(head->right)) + 1;
        newHead->height = max(height(newHead->left), height(newHead->right)) + 1;

        return newHead;
}


struct Node* insert(struct Node* head, int data){
        struct Node* temp = getNode(data);
        if(head == NULL){
                head = temp;
                return head;
        }

        if(data < head->data){
                head->left = insert(head->left, data);
        }else if(data > head->data){
                head->right = insert(head->right, data);
        }else{
                return head;
        }
 
        head->height =  1 + max(height(head->left), height(head->right));

        int balanace = height(head->left) - height(head->right);

        if(balanace > 1 && data < head->left->data){
                return rightRotation(head);
        }

        if(balanace > 1 && data > head->left->data){
                head->left = leftRoation(head->left);
                return rightRotation(head);
        }

        if(balanace < -1 && data > head->right->data){
                return leftRoation(head);
        }

        if(balanace < -1 && data < head->right->data){
                head->right = rightRotation(head->right);
                return leftRoation(head);
        }
        
        return head;
}

int main(){
        struct Node* head = NULL;
        int array[] =  {10, 80, 40, 20, 30, 50, 70, 60};
        int length = sizeof(array) / sizeof(array[0]); 
        for(int i=0; i<length; i++){
                head = insert(head, array[i]);
        }

        printf("\nCurrent head now: %d\n", head->data);
        preOrder(head);

}

struct Node *getNode(int data){
        struct Node *temp = new Node();
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        temp->height = 1;

        return temp;
}


int max(int a, int b){
        return (a > b) ? a : b;
}

int height(struct Node* head){
        if(head == NULL){
                return 0;
        }
       return head->height;
}

void preOrder(struct Node *head){
        if(head == NULL){
                return;
        }

        preOrder(head->left);
        printf("%d ", head->data);
        preOrder(head->right);
}
