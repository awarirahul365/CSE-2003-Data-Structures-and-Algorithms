class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char>stc;
        string sp="";
        string res="";
        for(int i=0;i<s.length();i++)
        {
            sp=s[i];
            stc.insert(s[i]);
            for(int j=i+1;j<s.length();j++)
            {
                if(stc.find(s[j])==stc.end())
                {
                    sp=sp+s[j];
                    stc.insert(s[j]);
                }
                else if(stc.find(s[j])!=stc.end())
                {
                    break;
                }
            }
            if(sp.length()>res.length())
            {
                res=sp;
            }
            stc.clear();
            sp="";
        }
        return res.length();
    }
};
