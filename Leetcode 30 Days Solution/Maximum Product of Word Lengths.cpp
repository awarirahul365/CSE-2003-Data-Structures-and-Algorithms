class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int maxprod=0;
        for(int i=0;i<words.size();i++)
        {
            string str=words[i];
            int len1=str.length();
            unordered_set<char>s;
            for(int j=0;j<str.length();j++)
            {
                s.insert(str[j]);
            }
            for(int k=i+1;k<words.size();k++)
            {
                string nextstr=words[k];
                int len2=nextstr.length();
                int flag=1;
                for(int m=0;m<nextstr.length();m++)
                {
                    if(s.find(nextstr[m])!=s.end())
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    maxprod=max(maxprod,len1*len2);
                }
            }
        }
        return maxprod;
    }
};
