class Solution {
    bool judge(vector<int>& sequence,int l,int r){
        if(l>=r)return true;
        int i = r;
        while(i > l && sequence[i - 1] > sequence[r]) --i;
        for(int j = i - 1; j >= l; --j) if(sequence[j] > sequence[r]) return false;
        return judge(sequence, l, i - 1) && (judge(sequence, i, r - 1));
    }
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(!sequence.size()) return false;
        return judge(sequence, 0, sequence.size() - 1);
    }
};