//运行时间：4ms  占用内存：476k
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size()==0) return false;
        stack<int> s;
        int i,j;
        j=0;
        for(i=0;i<pushV.size();i++)
        {
         s.push(pushV[i]);
         while(j<popV.size() && s.top()==popV[j]){
          s.pop();
          j++;
         }
        }
        return s.empty();
    }
};