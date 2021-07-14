class Solution {
public:
    string customSortString(string order, string str) {
        
        unordered_map<char,int>mp;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        string ans="";
        string temp="";
        for(int i=0;i<order.length();i++)
        {
            if(mp.find(order[i])!=mp.end())
            {
                int count=mp[order[i]];
                for(int j=0;j<count;j++)
                {
                    ans=ans+order[i];
                }
                mp[order[i]]=0;
            }
        }
        unordered_map<char,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>0)
            {
                for(int i=0;i<itr->second;i++)
                {
                    ans=ans+itr->first;
                }
            }
        }
        return ans;
    }
};
