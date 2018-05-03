public class Solution {
    //��������ʱ��������һ���ڵ㣬�����������Ѿ�����  �����Ե������жϣ�ÿ���ڵ�ֻ��Ҫ����һ��
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