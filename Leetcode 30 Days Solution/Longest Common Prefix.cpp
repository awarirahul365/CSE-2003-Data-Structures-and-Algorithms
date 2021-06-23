class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string val=strs[0];
        string res="";
        for(int i=1;i<val.length()+1;i++)
        {
            string s=val.substr(0,i);
            int j;
            for(j=1;j<strs.size();j++)
            {
                string s2=strs[j].substr(0,i);
                if(s!=s2)
                {
                    break;
                }
            }
            if(j==strs.size())
            {
                res=s;
            }
        }
        return res;
    }
};
