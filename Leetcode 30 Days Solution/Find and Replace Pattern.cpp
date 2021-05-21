class Solution {
public:
    int checkpattern(string word,string pattern)
    {
        if(word.length()!=pattern.length())
        {
            return 0;
        }
        else
        {
            int flag=1;
            unordered_map<char,char>mp;
            unordered_set<char>s;
            for(int i=0;i<pattern.length();i++)
            {
                if(mp.find(pattern[i])==mp.end() && s.find(word[i])==s.end())
                {
                    mp[pattern[i]]=word[i];
                    s.insert(word[i]);
                }
                else if(mp.find(pattern[i])==mp.end() && s.find(word[i])!=s.end())
                {
                    flag=0;
                    break;
                }
                else if(mp.find(pattern[i])!=mp.end() && mp[pattern[i]]!=word[i])
                {
                    flag=0;
                    break;
                }
            }
            return flag;
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>vect;
        for(int i=0;i<words.size();i++)
        {
            string word=words[i];
            int outp;
            outp=checkpattern(word,pattern);
            if(outp==1)
            {
                vect.push_back(word);
            }
        }
        return vect;
        
    }
};
