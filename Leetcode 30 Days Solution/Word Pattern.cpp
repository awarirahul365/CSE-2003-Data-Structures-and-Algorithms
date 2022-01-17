class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,string>mp;
        vector<string>vect;
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                vect.push_back(str);
                str="";
            }
            else
            {
                str=str+s[i];
            }
        }
        if(str.length()!=0)
        {
            vect.push_back(str);
        }
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        bool ans=true;
        if(pattern.length()!=vect.size())
        {
            ans=false;
        }
        else
        {
            for(int i=0;i<pattern.length();i++)
            {
                if(mp1.find(pattern[i])==mp1.end() && mp2.find(vect[i])==mp2.end())
                {
                   mp1[pattern[i]]=vect[i];
                   mp2[vect[i]]=pattern[i];
                }
                else if(mp1.find(pattern[i])==mp1.end() && mp2.find(vect[i])!=mp2.end()) 
                {
                    ans=false;
                    break;
                }
                else if(mp1.find(pattern[i])!=mp1.end() && mp2.find(vect[i])==mp2.end())
                {
                    ans=false;
                    break;
                }
                else
                {
                    if(mp1[pattern[i]]!=vect[i] || mp2[vect[i]]!=pattern[i])
                    {
                        ans=false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
