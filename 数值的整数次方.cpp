class Solution {
public:
    double Power(double base, int exponent) {
        double ans=1;
        if(exponent>0){
        while(exponent-->0){
            ans*=base;
        }
        }
        else{
          while(exponent++<0){
            ans/=base;
        }  
        }
        return ans;
    }
};