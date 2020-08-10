class Solution {
public:
    int square(int r)
    {
        if(r==0)
        {
            return 1;
        }
        else
        {
            int prod=1;
            while(r>0)
            {
                prod=prod*26;
                r--;
            }
            return prod;
        }
    }
    int titleToNumber(string s) {
        
        int res=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            int p;
            p=(int)s[i];
            int ch;
            ch=p-64;
            int rt;
            rt=square(s.size()-i-1);
            res=res+ch*rt;
        }
        return res;  
    }
};
