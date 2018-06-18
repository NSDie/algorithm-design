public class Solution {
        public void Mirror(TreeNode root) {
            if(root != null){
                Mirror(root.left);
                Mirror(root.right);
                TreeNode temp = root.left;
                root.left=root.right;
                root.right = temp; 
            } 
        }
    }