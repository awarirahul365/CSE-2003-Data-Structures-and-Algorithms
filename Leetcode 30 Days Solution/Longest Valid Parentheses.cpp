class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int>stc;
        stc.push(-1);
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                stc.push(i);
            }
            else
            {
                if(!stc.empty())
                {
                    stc.pop();
                }
                if(!stc.empty())
                {
                    res=max(res,i-stc.top());
                }
                else
                {
                    stc.push(i);
                }
            }
        }
        return res;
        
    }
};
