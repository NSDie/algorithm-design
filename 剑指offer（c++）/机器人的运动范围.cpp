class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        int flag[100][100]={0};
        return move(0,0,rows,cols,flag,threshold);
    }
    int move(int x,int y,int rows,int cols,int flag[100][100],int threshold)
    {
        if(x<0||x>=rows||y<0||y>=cols||numSum(x) + numSum(y)  > threshold || flag[x][y] == 1)
            return 0;
        flag[x][y]=1;
        return move( x+1, y, rows, cols, flag, threshold)
               +move( x-1, y, rows, cols, flag, threshold) 
               +move( x, y+1, rows, cols, flag, threshold)
               +move( x, y-1, rows, cols, flag, threshold)
               +1;
    }
    int numSum(int i){
        int sum = 0;
        do{
            sum += i%10;
        }while((i = i/10) > 0);
        return sum;
    }
};