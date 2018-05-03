public class Solution {
    public int FindGreatestSumOfSubArray(int[] array) {
        int count=0;
        int Max=-9999999;
        for(int i = 0 ;i<array.length;i++){
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
}