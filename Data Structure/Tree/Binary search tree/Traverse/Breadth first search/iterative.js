/*
class Node{
        constructor(value) {
                this.val = value;
                this.left = null;
                this.right = null;
        }
};
*/


var levelOrder = function (root) {
        if (root == null) return [];
        const queue = [];
        let count;
        let temp;
        queue.push(root);
        while(queue.length != 0) {
                count = queue.length;
                for(let i = 0; i < count; i++) {
                        temp = queue.shift();
                        console.log(temp.val);
                        if(temp.left != null) queue.push(temp.left);
                        if(temp.right != null) queue.push(temp.right);
                }
        }
};      
