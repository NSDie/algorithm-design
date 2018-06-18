class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()<2)
            return ;
        int sum=data[0];
        int i,j;
        unsigned int flag=1;
        for(i=1;i<data.size();i++)
            sum ^= data[i];
        while(flag){
            if(flag&sum)
                break;
            flag = flag << 1;
        }
        *num1=*num2=0;
        for(i=0;i<data.size();i++){
            if(data[i] & flag){
                *num1 ^= data[i];
            }
            else{
                *num2 ^= data[i];
            }
        }
    }
};