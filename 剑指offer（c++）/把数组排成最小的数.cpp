class Solution {
public:
   static bool cmp(int a,int b){  // sort�еıȽϺ���compareҪ����Ϊ��̬��Ա������ȫ�ֺ�����������Ϊ��ͨ��Ա����������ᱨ��
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