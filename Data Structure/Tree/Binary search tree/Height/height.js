/*
  class Node{
          constructor(value) {
                  this.val = value;
                  this.left = null;
                  this.right = null;
          }
  };
*/


const height = function (root) {
        const h = function(root) {
                if(root == null) return 0;
                return 1 + Math.max(h(root.left), h(root.right));
        }
        return h(root);
}
