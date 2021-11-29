class Solution {
public:
    string reverseStr(string s, int k) {
        
        int sz=s.length();
        string ans="";
        int grp=2*k;
            int div=sz/grp;
            int mod=sz%grp;
            int counter=0;
            int ptr=0;
            while(counter<div)
            {
                string str=s.substr(ptr,k);
                string str2=s.substr(ptr+k,k);
                reverse(str.begin(),str.end());
                ans=ans+str+str2;
                counter++;
                ptr=ptr+2*k;
            }
            if(mod<=k)
            {
                for(int i=sz-1;i>=ptr;i--)
                {
                    ans=ans+s[i];
                }
            }
            else
            {
                int count=0;
                string y="";
                while(count<k)
                {
                    y=y+s[ptr];
                    count++;
                    ptr++;
                }
                reverse(y.begin(),y.end());
                ans=ans+y;
                for(int i=ptr;i<sz;i++)
                {
                    ans=ans+s[i];
                }
            }
        return ans;
    }
};
