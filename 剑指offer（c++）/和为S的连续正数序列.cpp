class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> allres;
        int a=1,b=2,i;
        while(a<b){
            int count=(a+b)*(b-a+1)/2;
            if(count<sum)
                b++;
            if(count==sum){
                vector<int> res;
                for(i=a;i<=b;i++)
                    res.push_back(i);
                allres.push_back(res);
                a++;
            }
            if(count>sum)
                a++;
        }
        return allres;
    }
};