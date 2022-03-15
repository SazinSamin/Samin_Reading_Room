class Node{
        constructor(value) {
                this.val = value;
                this.letft = null;
                this.right = null;
        }
};

let root = null;


function insert(val) {
        root = insertHelper(root, val);
}


function insertHelper(root, val) {
        if(root == null) {
                root = new Node(val);
                return root;
        }

        if(val < root.val) {
                root.letft = insertHelper(root.letft, val);
        } else {
                root.right = insertHelper(root.right, val);
        }
        return root;
}


function preOrder(root) {
        if(root == null) return;
        console.log(root.val);
        preOrder(root.letft);
        preOrder(root.right);
}




insert(10);
insert(12);
insert(2);
preOrder(root);

