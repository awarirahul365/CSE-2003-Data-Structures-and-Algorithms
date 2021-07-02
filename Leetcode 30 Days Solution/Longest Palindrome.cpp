class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        unordered_map<char,int>::iterator itr;
        int countlength=0;
        bool flag=0;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if((itr->second)%2==0)
            {
                countlength=countlength+itr->second;
            }
            else
            {
                countlength=countlength+itr->second-1;
                flag=1;
            }
        }
        if(flag==1)
        {
            countlength=countlength+1;
        }
        return countlength;
    }
};
