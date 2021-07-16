class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int count=0;
        unordered_map<char,int>mp1;
        for(int i=0;i<chars.length();i++)
        {
            mp1[chars[i]]++;
        }
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            unordered_map<char,int>mp2;
            mp2.clear();
            for(int j=0;j<str.length();j++)
            {
                mp2[str[j]]++;
            }
            bool flag=true;
            unordered_map<char,int>::iterator itr;
            for(itr=mp2.begin();itr!=mp2.end();itr++)
            {
                int vectcount=itr->second;
                char ch=itr->first;
                if(mp1.find(ch)==mp1.end())
                {
                    flag=false;
                    break;
                }
                else
                {
                    if(mp1[ch]<vectcount)
                    {
                        flag=false;
                        break;
                    }
                }
            }
            if(flag==true)
            {
                count=count+str.length();
            }
        }
        return count;
    }
};
