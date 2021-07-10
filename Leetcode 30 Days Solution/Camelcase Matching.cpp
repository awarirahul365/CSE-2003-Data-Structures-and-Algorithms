class Solution {
public:
    int issubsequence(string str,string pattern)
    {
        int found=1;
        int i=0;
        int start=0;
        while(i<pattern.length())
        {
            int j;
            int flag=0;
            for(j=start;j<str.length();j++)
            {
                if(str[j]==pattern[i])
                {
                    flag=1;
                    start=j+1;
                    break;
                }
            }
            if(flag==0)
            {
                found=0;
                break;
            }
            else
            {
                i++;
            }
        }
        return found;
    }
    int getuppercount(string s)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(isupper(ch))
            {
                count++;
            }
        }
        return count;
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        
        int patternupper;
        int queryupper=0;
        vector<bool>ans;
        patternupper=getuppercount(pattern);
        for(int i=0;i<queries.size();i++)
        {
            string str=queries[i];
            int strcount=getuppercount(str);
            if(strcount!=patternupper)
            {
                ans.push_back(false);
            }
            else
            {
                int outp;
                outp=issubsequence(str,pattern);
                if(outp==1)
                {
                    ans.push_back(true);
                }
                else
                {
                    ans.push_back(false);
                }
            }
        }
        return ans;
    }
};
