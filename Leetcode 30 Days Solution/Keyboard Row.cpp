class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string>vect;
        string str1="qwertyuiop";
        string str2="asdfghjkl";
        string str3="zxcvbnm";
        unordered_map<char,int>mp;
        for(int i=0;i<str1.length();i++)
        {
            mp[str1[i]]=1;
        }
        for(int i=0;i<str2.length();i++)
        {
            mp[str2[i]]=2;
        }
        for(int i=0;i<str3.length();i++)
        {
            mp[str3[i]]=3;
        }
        for(int i=0;i<words.size();i++)
        {
            string w=words[i];
            transform(w.begin(),w.end(),w.begin(), ::tolower);
            int index=mp[w[0]];
            bool flag=true;
            for(int j=1;j<w.length();j++)
            {
                if(mp[w[j]]!=index)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {
                vect.push_back(words[i]);
            }
        }
        /*string ans=to_string(mp['p']);
        vect.push_back(ans);*/
        return vect;
    }
};
