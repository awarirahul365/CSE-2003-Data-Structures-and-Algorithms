class Solution {
public:
    int maxPower(string s) {
        
        int len=s.length();
        int i=0;
        int count=1;
        int maxlen=-1;
        while(i<len)
        {
            for(int j=i+1;j<len;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count>maxlen)
            {
                maxlen=count;
            }
            i=i+count;
            count=1;
        }
        return maxlen;
    }
};
