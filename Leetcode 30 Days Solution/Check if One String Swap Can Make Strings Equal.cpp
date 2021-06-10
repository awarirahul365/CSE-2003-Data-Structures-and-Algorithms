class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        if(s1==s2)
        {
            return true;
        }
        else
        {
            if(s1.length()!=s2.length())
            {
                return false;
            }
            else
            {
                int count=0;
                vector<int>vect;
                for(int i=0;i<s1.length();i++)
                {
                    if(s1[i]!=s2[i])
                    {
                        vect.push_back(i);
                    }
                }
                if(vect.size()==2)
                {
                    char temp=s1[vect[0]];
                    s1[vect[0]]=s1[vect[1]];
                    s1[vect[1]]=temp;
                    if(s1==s2)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        
    }
};
