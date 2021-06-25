class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0;
        int pos=0;
        bool ans=true;
        while(i<s.length())
        {
            char ch=s[i];
            int j;
            int flag=0;
            for(j=pos;j<t.length();j++)
            {
                if(ch==t[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                pos=j+1;
                i++;
            }
            else
            {
                ans=false;
                break;
            }
        }
        return ans;
    }
};
