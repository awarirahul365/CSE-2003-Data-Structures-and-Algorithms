class Solution {
public:
    int countGoodSubstrings(string s) {
        
        if(s.length()<3)
        {
            return 0;
        }
        else
        {
            int count=0;
            unordered_map<char,int>mp;
            for(int i=0;i<3;i++)
            {
                mp[s[i]]++;
            }
            if(mp.size()==3)
            {
                count++;
            }
            for(int i=3;i<s.length();i++)
            {
                mp[s[i-3]]--;
                if(mp[s[i-3]]==0)
                {
                    mp.erase(s[i-3]);
                }
                mp[s[i]]++;
                if(mp.size()==3)
                {
                    count++;
                }
            }
            return count;
        }
        
        
    }
};
