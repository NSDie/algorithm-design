class Solution {
public:
    int Sum_Solution(int n) {
    int sum = n;
    int ans = (n>0)&&((sum+=Sum_Solution(n-1))>0);
    return sum;
    }
};