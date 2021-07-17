class Solution {
public:
    int comparestr(string str,string w)
    {
        sort(str.begin(),str.end());
        sort(w.begin(),w.end());
        char ch1=str[0];
        char ch2=w[0];
        int count1=0;
        int count2=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==ch1)
            {
                count1++;
            }
        }
        for(int i=0;i<w.length();i++)
        {
            if(w[i]==ch2)
            {
                count2++;
            }
        }
        if(count2>count1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        int n=queries.size();
        vector<int>vect(n,0);
        for(int i=0;i<queries.size();i++)
        {
            string str=queries[i];
            int c=0;
            for(int j=0;j<words.size();j++)
            {
                int outp;
                outp=comparestr(str,words[j]);
                if(outp==1)
                {
                    c++;
                }
            }
            vect[i]=c;
        }
        return vect;
    }
};
