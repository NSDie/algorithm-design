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
            stack2.push(stack1.pop()); //java跟c不一样没有top 直接pop返回出栈值。
            }
        }
        
        return stack2.pop();
    }
}