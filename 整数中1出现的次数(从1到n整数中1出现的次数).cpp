class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
            // ͳ�ƴ���
        int count = 0;
        for(int i = 1; i <= n; i *= 10){
            // �����λ�͵�λ
            int a = n / i, b = n % i;
            count += (a + 8) / 10 * i + (a % 10 == 1) * (b + 1);
        }
        return count;
    }
};