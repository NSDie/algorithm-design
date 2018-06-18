class Solution {
public:
   static bool cmp(int a,int b){  // sort中的比较函数compare要声明为静态成员函数或全局函数，不能作为普通成员函数，否则会报错。
        string A="";
        string B="";
        A+=to_string(a);
        A+=to_string(b);
        B+=to_string(b);
        B+=to_string(a);
        return A<B;
    }
    string PrintMinNumber(vector<int> numbers) {
        string answer="";
        sort(numbers.begin(),numbers.end(),cmp);
        for(int i=0;i<numbers.size();i++)
            answer+=to_string(numbers[i]);
        return answer;
    }
};