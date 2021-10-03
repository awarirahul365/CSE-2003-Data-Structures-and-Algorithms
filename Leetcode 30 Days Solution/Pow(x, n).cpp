class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1.0;
        long p=n;
        if(n<0)
        {
            p=(-1)*p;
        }
        while(p!=0)
        {
            if(p%2==0)
            {
                x=x*x;
                p=p/2;
            }
            else
            {
                ans=ans*x;
                p=p-1;
            }
        }
        if(n<0)
        {
            return (double)1.0/(double)ans;
        }
        else
        {
            return ans;
        }
    }
};
