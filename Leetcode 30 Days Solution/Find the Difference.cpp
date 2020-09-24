class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int arr[256]={0};
        for(int i=0;i<s.length();i++)
        {
            int p;
            p=(int)s[i];
            arr[p]++;
        }
        
        for(int j=0;j<t.length();j++)
        {
            int q;
            q=(int)t[j];
            arr[q]--;
        }
        int outp;
        for(int i=0;i<256;i++)
        {
            if(arr[i]<0)
            {
                outp=i;
            }
        }
        char res;
        res=(char)outp;
        return res;
    }
};
