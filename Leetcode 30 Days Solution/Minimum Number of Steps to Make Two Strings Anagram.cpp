class Solution {
public:
    int minSteps(string S1, string S2) {
        
        int arr1[256];
        for(int i=0;i<256;i++)
        {
            arr1[i]=0;
        }
        for(int i=0;i<S1.length();i++)
        {
            int p=(int)S1[i];
            arr1[p]++;
        }
        for(int i=0;i<S2.length();i++)
        {   
            int q=(int)S2[i];
            arr1[q]--;
        }
        int count=0;
        for(int i=0;i<256;i++)
        {
            if(arr1[i]<0)
            {
                count=count+abs(arr1[i]);
            }
        }
        return count;
        
        
    }
};
