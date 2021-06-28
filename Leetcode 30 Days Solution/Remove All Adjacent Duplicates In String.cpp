class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>stc;
        for(int i=0;i<s.length();i++)
        {
            if(stc.empty())
            {
                stc.push(s[i]);
            }
            else
            {
                char tp=stc.top();
                if(tp!=s[i])
                {
                    stc.push(s[i]);
                }
                else
                {
                    stc.pop();
                }
            }
        }
        string res="";
        while(!stc.empty())
        {
            res=res+stc.top();
            stc.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
