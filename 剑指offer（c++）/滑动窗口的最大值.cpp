class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int>res;
        deque<int>que;
        for(int i=0;i<num.size();i++){
            while(que.size() && num[que.back()]<=num[i])
                que.pop_back();
            while(que.size() && i-que.front()+1>size)
                que.pop_front();
            que.push_back(i);
            if(size && i+1>=size)
                res.push_back(num[que.front()]);
        }
        return res;
    }
};