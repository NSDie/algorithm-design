class Solution {
public:
    int rectCover(int number) {
        //f(1)=1 ; f(2)=2; f(3)=3;f(4)=5
        if(number<=0)
            return 0;
        else if(number==1)
            return 1;
        else if(number==2)
            return 2;
        else 
            return rectCover(number-1)+rectCover(number-2);
    }
};