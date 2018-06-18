class Solution {
public:
// 非递归版
    int Fibonacci(int n) {
       int f=0,i=1;
        while(n-- >0){
            i+=f;
            f=i-f;
        }
        return f;
    }
// 递归版
    int Fibonacci(int n) {
       if(n<=0) return 0;
       if(n==1||n==2) return 1;
        return Fibonacci(n-1)+Fibonacci(n-2);
    }

};
