class Solution {
public:
    int checkavail(string curr,string s)
    {
        int count=0;
        int startindex=0;
        int res;
        for(int j=0;j<curr.length();j++)
        {
            char ch=curr[j];
            for(int k=startindex;k<s.length();k++)
            {
                if(s[k]==ch)
                {
                    count++;
                    res=k;
                    break;
                }
            }
            startindex=res+1;
        }
        if(count==curr.length())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    string findLongestWord(string s, vector<string>& d) {
        
        vector<string>vect;
        int outp;
        int maxlen=0;
        for(int i=0;i<d.size();i++)
        {
            string curr=d[i];
            outp=checkavail(curr,s);
            if(outp==1)
            {
                if(curr.length()>maxlen)
                {
                    maxlen=curr.length();
                }
                vect.push_back(curr);
            }
        }
        string ans;
        sort(vect.begin(),vect.end());
        if(vect.size()==0)
        {
            ans="";
        }
        else
        {
            for(int i=0;i<vect.size();i++)
            {
                if(vect[i].length()==maxlen)
                {
                    ans=vect[i];
                    break;
                }
            }
        }
        return ans;
    }
};
