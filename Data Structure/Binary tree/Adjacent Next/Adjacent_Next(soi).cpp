#include <iostream>
using namespace std;
struct Node
{
        int data;
        struct Node *left;
        struct Node *right;
        struct Node *parent;
};

struct Node *head = NULL;

struct Node *getNode(int data)
{
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        temp->parent = NULL;
        return temp;
}

void display(struct Node *head)
{
        if (head == NULL)
        {
                return;
        }
        display(head->left);
        cout<<head->data<<" ";
        display(head->right);
}

struct Node *insert(int data, struct Node *head)
{
        struct Node *temp = getNode(data);
        if (head == NULL)
        {
                head = temp;
                return head;
        }

        struct Node *temp2;
        if (data < head->data)
        {
                temp2 = insert(data, head->left);
                head->left = temp2;
                temp2->parent = head;
        }
        else
        {
                temp2 = insert(data, head->right);
                head->right = temp2;
                temp2->parent = head;
        }
        return head;
}

struct Node *findNode(struct Node *head, int data)
{
        if (head == NULL)
        {
                return NULL;
        }

        if (head->data == data)
        {
                return head;
        }
        if (data < head->data)
        {
                return findNode(head->left, data);
        }
        else
        {
                return findNode(head->right, data);
        }
}

int findNext(struct Node *head, int data)
{
        struct Node *getSearchNode = findNode(head, data);
        if (getSearchNode->right != NULL)
        {
                getSearchNode = getSearchNode->right;
                while (getSearchNode->left != NULL)
                {
                        getSearchNode = getSearchNode->left;
                }
                return getSearchNode->data;
        }
        else
        {
                while (getSearchNode->parent != NULL)
                {
                        if (getSearchNode->data > data)
                        {
                                return getSearchNode->data;
                        }
                        getSearchNode = getSearchNode->parent;
                }
                if(getSearchNode->data > data){
                        return getSearchNode->data;
                }
        }
        return -1;
}

int main(){     
        int array[] = {9, 7, 5, 3, 1, 2, 4, 6, 8};
        int length = sizeof(array) / sizeof(array[0]);

        for (int i = 0; i < length; i++){
                head = insert(array[i], head);
        }
        display(head);
        for(int i=0; i<length; i++){
                printf("%d: %d\n", array[i], findNext(head, array[i]));
        }
}
