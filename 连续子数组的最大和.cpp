class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int count=0;
        int Max=-9999999;
        for(int i = 0 ;i<array.size();i++){
            if(count<=0){
                count=array[i];
            }
            else{
                count+=array[i];
            }
            if(Max<count)
                Max=count;
        }
        return Max;
    }
};