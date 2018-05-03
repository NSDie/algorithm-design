import java.util.ArrayList;
public class Solution {
    public int[] multiply(int[] A) {
    int n = A.length;
    int[] B = new int[n];
    int[] pos = new int[n];
    int[] rev = new int[n];
    pos[0]=1;
    rev[0]=1;
    for (int i=1;i<n;i++){
        pos[i]=pos[i-1]*A[i-1];
        rev[i]=rev[i-1]*A[n-i];
    }
    for (int i=0;i<n;i++)
        B[i]=pos[i]*rev[n-1-i];
        
    return B;

    }
}