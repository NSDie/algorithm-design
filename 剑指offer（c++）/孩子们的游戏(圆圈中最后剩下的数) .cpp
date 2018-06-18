class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        queue<int>q;
        int i,j,tmp,flag=0;
        for(i=0;i<n;i++)
            q.push(i);
        j=0;
        while(!q.empty()){
            if(j==m-1){
                j=0;
                q.pop();
            }
            else{
            tmp=q.front();
            q.pop();
            q.push(tmp);
            j++;
            }
            if(q.size()==1) return q.front();
        }
        return -1;
    }
};