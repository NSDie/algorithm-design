class Solution {
public:
    string LeftRotateString(string str, int n) {
        
        int len=str.length();
        if(len==0) return "";
        n%=len;
        string s1=str.substr(n);
        string s2=str.substr(0,n);
        return s1+s2;
        
    }
};