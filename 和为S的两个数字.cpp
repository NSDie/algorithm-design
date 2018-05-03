class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> ans;
        int i=0,j=array.size()-1;
        while(i<j)
        {
            if(array[i]+array[j]==sum)
            { 
                ans.push_back(array[i]);
                ans.push_back(array[j]);
                break;
            }
            else if(array[i]+array[j]<sum) i++;
            else if(array[i]+array[j]>sum) j--;       
        }    
        return ans;
    }
};