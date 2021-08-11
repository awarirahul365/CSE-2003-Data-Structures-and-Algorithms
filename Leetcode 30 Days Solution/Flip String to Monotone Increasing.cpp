class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int index;
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                flag=1;
                index=i;
                break;
            }
        }
        if(flag==0)
        {
            return 0;
        }
        else
        {
            int zto=0;
            int oc=0;
            for(int i=index;i<s.length();i++)
            {
                if(s[i]=='1')
                {
                    oc++;
                }
                else
                {
                    zto++;
                }
                if(zto>oc)
                {
                    zto=oc;
                }
            }
            return zto;
        }
    }
};
