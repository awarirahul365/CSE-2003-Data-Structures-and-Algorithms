class Solution {
public:
    int lengthOfLastWord(string s) {
        
        vector<string>vect;
        string sp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                sp=sp+s[i];
            }
            else if(s[i]==' ')
            {
                vect.push_back(sp);
                sp="";
            }
        }
        vect.push_back(sp);
        reverse(vect.begin(),vect.end());
        int res;
        int flag=0;
        for(int j=0;j<vect.size();j++)
        {
            if(vect[j].length()!=0)
            {
                flag=1;
                res=vect[j].length();
                break;
            }
        }
        int out;
        if(flag==1)
        {
            out=res;
        }
        else
        {
            out=0;
        }
        return out;
    }
};
