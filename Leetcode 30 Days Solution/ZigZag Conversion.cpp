class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows==1)
        {
            return s;
        }
        else
        {
            map<int,vector<char>>mp;
            int count=1;
            char dir='f';
            for(int i=0;i<s.length();i++)
            {
                if(dir=='f')
                {
                    if(count<numRows)
                    {
                        mp[count].push_back(s[i]);
                        count++;
                    }
                    else if(count==numRows)
                    {
                        mp[count].push_back(s[i]);
                        count--;
                        dir='b';
                    }
                }
                else if(dir=='b')
                {
                    if(count>1)
                    {
                        mp[count].push_back(s[i]);
                        count--;
                    }
                    else if(count==1)
                    {
                        mp[count].push_back(s[i]);
                        count++;
                        dir='f';
                    }
                }
            }
            string res="";
            map<int,vector<char>>::iterator itr;
            for(itr=mp.begin();itr!=mp.end();itr++)
            {
                for(int j=0;j<itr->second.size();j++)
                {
                    res=res+mp[itr->first][j];
                }
            }
            return res;
        }
    }
};
