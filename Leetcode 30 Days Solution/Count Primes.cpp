class Solution {
public:
    int countPrimes(int n) {
        
        if(n==1 || n==0 || n==2)
        {
            return 0;
        }
        else
        {
            int z=sqrt(n);
            vector<int>arr(n+1,1);
            for(int i=2;i<=z;i++)
            {
                int num=i;
                int j=2;
                while(num*j<=n)
                {
                    arr[num*j]=0;
                    j++;
                }
            }
            int count=0;
            for(int i=2;i<n;i++)
            {
                if(arr[i]==1)
                {
                    count++;
                }
            }
            return count;
        }
        
    }
};
