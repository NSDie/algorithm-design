class Solution {
public:
     /*int  NumberOf1(int n) {
         return bitset<32>(n).count();
     }*/


	int NumberOf1(int n) {
        int count = 0;
        while (n != 0) {
            ++count;
            n = (n - 1) & n;
        }
        return count;
    }
};