class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
    int n = A.size();
    vector<int> pos(n,1);
    vector<int> rev(n,1);
    vector<int> B(n,1);
    for (int i=1;i<n;i++){
        pos[i]=pos[i-1]*A[i-1];
        rev[i]=rev[i-1]*A[n-i];
    }
    for (int i=0;i<n;i++)
        B[i]=pos[i]*rev[n-1-i];
        
    return B;
    }
};