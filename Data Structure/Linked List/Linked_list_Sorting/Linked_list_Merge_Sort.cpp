#include <iostream>
#include <math.h>
using namespace std;

struct Node{
        int data;
        struct Node *next;
};


void display(struct Node *head){
        while (head != NULL){
                cout << head->data << " ";
                head = head->next;
        }
}

struct Node *insert(struct Node *head, int data){
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        if (head == NULL){
                head = temp;
                return head;
        }

        temp->next = head;
        head = temp;
        return head;
}


struct Node* MergeSplit(struct Node* a, struct Node* b){
        struct Node* result = NULL;

        if(a == NULL){
                return b;
        }
        else if(b == NULL){
                return a;
        }

        if(a->data <= b->data){
                result = a;
                result->next = MergeSplit(a->next, b);
        }else{
                result = b;
                result->next = MergeSplit(a, b->next);
        }
        return result;
}


void SplitList(struct Node* head, struct Node** a, struct Node** b){
        struct Node *slow = head;
        struct Node *fast = head->next;

        while(fast != NULL){
                fast = fast->next;
                if(fast != NULL){
                        slow = slow->next;
                        fast =  fast->next;
                }
        }

        *a = head;
        *b = slow->next;
        slow->next = NULL;

        int test = 10;
}


void MergeSort(struct Node** headRef){
        struct Node* head = *headRef;
        struct Node* a;
        struct Node* b;

        if(head == NULL || head->next == NULL){
                return;
        }

        SplitList(head, &a, &b);

        MergeSort(&a);
        MergeSort(&b);

        *headRef = MergeSplit(a, b);
}


int main(){
        srand(time(0));
        struct Node *head = NULL;
        for (int i = 0; i < 10; i++){
                head = insert(head, rand() % 100);
        }

        cout << "\nBefore: ";
        display(head);
        MergeSort(&head);
        cout << "\nAfter: ";
        display(head);
}
