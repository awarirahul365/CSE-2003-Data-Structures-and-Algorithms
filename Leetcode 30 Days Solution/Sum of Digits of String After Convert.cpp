class Solution {
public:
    int getdigitsum(int p)
    {
        int num=0;
        while(p>0)
        {
            int rem=p%10;
            num=num+rem;
            p=p/10;
        }
        return num;
    }
    int getLucky(string s, int k) {
        
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int p=(int)s[i]-96;
            int outp=getdigitsum(p);
            sum=sum+outp;
        }
        k--;
        while(k>0)
        {
            sum=getdigitsum(sum);
            k--;
        }
        return sum;
    }
};
