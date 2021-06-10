class Solution {
public:
    string replaceDigits(string s) {
        
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(i%2!=0)
            {
                char ch=s[i-1];
                int shift=(int)s[i]-48;
                int asc=(int)ch;
                int p=shift+asc;
                char pt=(char)p;
                ans=ans+pt;
            }
            else
            {
                ans=ans+s[i];
            }
        }
        return ans;
    }
};
