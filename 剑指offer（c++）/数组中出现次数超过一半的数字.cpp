class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int num = numbers.size();
        int count[num+1];
        int i;
        for(i=1;i<=num;i++)
            count[i]=0;
        for(i=0;i<num;i++)
        {
                count[numbers[i]]++;
                if(count[numbers[i]] > num/2) return numbers[i];
        }
        return 0;
    }
};