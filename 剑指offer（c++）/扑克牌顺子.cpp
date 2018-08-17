class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        int max=-1;
        int i;
        int min=14;
        int flag=0;
        if(numbers.size() != 5) return false;
        for(i=0; i<numbers.size() ;i++){
            int number = numbers[i];
            if(number < 0 || number > 13) return false;
            if(number == 0) continue;
            if(((flag >> number)&1)==1) return false;
            flag |= (1 << number);
            if(number > max) max = number;
            if(number < min) min = number;
            if(max-min>=5) return false;
        }
        return true;
    }
};