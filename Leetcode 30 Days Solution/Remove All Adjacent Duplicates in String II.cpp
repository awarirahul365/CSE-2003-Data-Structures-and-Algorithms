class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<pair<char,int>>stc;
        for(int i=0;i<s.length();i++)
        {
            if(stc.empty())
            {
                stc.push({s[i],1});
            }
            else
            {
                auto tp=stc.top();
                char ch=tp.first;
                int val=tp.second;
                if(ch!=s[i])
                {
                    stc.push({s[i],1});
                }
                else
                {
                    stc.pop();
                    val++;
                    stc.push({ch,val});
                }
                auto afadd=stc.top();
                int nv=afadd.second;
                if(nv==k)
                {
                    stc.pop();
                }
            }
        }
        string res="";
        while(!stc.empty())
        {
            auto t=stc.top();
            for(int i=0;i<t.second;i++)
            {
                res=res+t.first;
            }
            stc.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
