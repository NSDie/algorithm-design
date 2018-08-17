class Solution {
public:
	void replaceSpace(char *str,int length) {
        char copy[length];
        int i,j;
        for(i=0;i<length;i++){
            copy[i]=str[i];
        }
        j=0;
        for(i=0;i<length;i++){
            if(copy[i]==' '){
                str[j++]='%';
                str[j++]='2';
                str[j++]='0';
            }else{
                str[j++]=copy[i];
            }
        }
	}
};