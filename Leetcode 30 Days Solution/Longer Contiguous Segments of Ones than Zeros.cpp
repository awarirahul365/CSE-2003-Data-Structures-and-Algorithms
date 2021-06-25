class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int countzero=0;
        int countone=0;
        int maxone=0;
        int maxzero=0;
        int i=0;
        while(i<s.length())
        {
            char ch=s[i];
            if(ch=='1')
            {
                countone=1;
                int j;
                for(j=i+1;j<s.length();j++)
                {
                    if(s[j]!='1')
                    {
                        break;
                    }
                    else
                    {
                        countone++;
                    }
                }
                maxone=max(maxone,countone);
                i=j;
            }
            else
            {
                countzero=1;
                int k;
                for(k=i+1;k<s.length();k++)
                {
                    if(s[k]!='0')
                    {
                        break;
                    }
                    else
                    {
                        countzero++;
                    }
                }
                maxzero=max(maxzero,countzero);
                i=k;
            }
        }
        if(maxone>maxzero)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
