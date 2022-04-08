class Node{
        constructor(val) {
                this.val = val;
                this.left = null;
                this.right = null;
        }
}


let root = null;


function insert(root, val) {
        if(root == null) {
                root = new Node(val);
                return root;
        }

        if(val < root.val) {
                root.left = insert(root.left, val);
        } else {
                root.right = insert(root.right, val);
        }
        return root;
}



function preOrder(root) {
        if(root == null) {
                return;
        }
        preOrder(root.left);
        console.log(root.val);
        preOrder(root.right);
}




const arr = [10, 9, 11, 8, 12, 7, 13];
for(let i = 0; i < arr.length; i++) {
        root = insert(root, arr[i]);
}

preOrder(root);
