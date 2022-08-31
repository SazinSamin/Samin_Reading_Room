#include<iostream>
using namespace std;

class ListNode {
        public:
                int val;
                ListNode* next;
};

// C style strucy
/*
struct ListNode{
        int val;
        ListNode* next;

};
*/

ListNode* insert(ListNode* head, int val) {
        ListNode* node = new ListNode();
        node->val = val;
        if(head == NULL) {
                head = node;
                return head;
        }
        node->next = head;
        head = node;
        return head;
}

void print(ListNode* head) {
        while(head != NULL) {
                cout << head->val << " ";
                head = head->next;
        }
}


int main () {
        ListNode* head = NULL;
        int length = 5;
        int arr[length] = {5, 4, 3, 2, 1};
        for(int i = 0; i < length; i++) {
                head = insert(head, arr[i]);
        }
        print(head);

}
