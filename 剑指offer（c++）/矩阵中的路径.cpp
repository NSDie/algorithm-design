class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        int flag[100]={0};
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(isPath(matrix,i,j,rows,cols,0,str,flag))
                    return true;
            }
        }
        return false;
    }

    bool isPath(char* matrix,int x,int y,int rows,int cols,int k,char* str,int* flag)
    {
        int index = x*cols+y;
        if(x<0||x>=rows||y<0||y>=cols||matrix[index]!=str[k]||flag[index]==1)
            return false;
        if(k == strlen(str)-1)return true;
        flag[index]=1;
        if(isPath(matrix,x-1,y,rows,cols,k+1,str,flag)
           ||isPath(matrix,x+1,y,rows,cols,k+1,str,flag)
           ||isPath(matrix,x,y-1,rows,cols,k+1,str,flag)
           ||isPath(matrix,x,y+1,rows,cols,k+1,str,flag)){
            return true;
        }
        flag[index]=0;
        return false;
        
    }
};