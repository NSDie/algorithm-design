import java.util.Stack;

public class Solution {
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
    
    public void push(int node) {
        stack1.push(node);
    }
    
    public int pop() {
        int a;
        if(stack2.empty()){
            while(!stack1.empty()){
            stack2.push(stack1.pop()); //java��c��һ��û��top ֱ��pop���س�ջֵ��
            }
        }
        
        return stack2.pop();
    }
}