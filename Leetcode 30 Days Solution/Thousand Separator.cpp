class Solution {
public:
    string thousandSeparator(int n) {
        
        string ans;
        if(n<1000)
        {
            ans=to_string(n);
        }
        else
        {
            int count=0;
            while(n>0)
            {
                if(count%3==0 && count!=0)
                {
                    ans=ans+'.';
                    count=0;
                }
                else
                {
                    int rem=n%10;
                    string p=to_string(rem);
                    ans=ans+p;
                    n=n/10;
                    count++;
                }
            }
            reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};
