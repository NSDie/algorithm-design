public class Solution {
    //后续遍历时，遍历到一个节点，其左右子树已经遍历  依次自底向上判断，每个节点只需要遍历一次
    private boolean isBalanced=true;
    public int getDepth(TreeNode root){
        if(root==null)
           return 0;
        int left=getDepth(root.left);
        int right=getDepth(root.right);
        if(Math.abs(left-right)>1)
            isBalanced=false;
        return right>left?right+1:left+1;
    }
    public boolean IsBalanced_Solution(TreeNode root) {
        getDepth(root);
        return isBalanced;
    }
}