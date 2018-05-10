class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        int i;
        int arr[length+1];
        for(i=0;i<length;i++)
            arr[i]=1;
        for(i=0;i<length;i++)
        {
            if(arr[numbers[i]]==1)
                arr[numbers[i]]=0;
            else
            {
                duplication[0] = numbers[i]; 
                return true;
            }
        }
        return false;
    }
};