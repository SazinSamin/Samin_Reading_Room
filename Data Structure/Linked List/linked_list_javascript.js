// https://www.freecodecamp.org/news/implementing-a-linked-list-in-javascript/
// https://www.geeksforgeeks.org/implementation-linkedlist-javascript/

class ListNode {
        constructor(val, next) {
                this.val = (val === undefined ? 0 : val);
                this.next = (next === undefined ? null : next);
        }
}

const insert = (head, val) => {
        const node = new ListNode(val);
        if(head == null) {
                return node;
        }
        node.next = head;
        head = node;
        return head;
}

const printNodeVal = (head) => {
        while(head != null) {
                console.log(head.val);
                head = head.next;
        }
}

let head = null;
const arr = [5, 4, 3, 2, 1];
for(let i = 0; i < arr.length; i++) {
        head = insert(head, arr[i]);
}

printNodeVal(head);
