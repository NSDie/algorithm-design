public class Solution {
    public int TreeDepth(TreeNode root) {
            return TreeD(root,0);    
            }    
    private int TreeD(TreeNode root,int d){
           if (root==null)            
            return d;        
           else           
            d++;        
           return Math.max(TreeD(root.left,d),TreeD(root.right,d));
           }
}