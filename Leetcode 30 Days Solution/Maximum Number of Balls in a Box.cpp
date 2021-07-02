class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        
        unordered_map<int,int>mp;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int num=i;
            int sum=0;
            while(num>0)
            {
                int rem=num%10;
                sum=sum+rem;
                num=num/10;
            }
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=1;
            }
            else
            {
                mp[sum]++;
            }
        }
        unordered_map<int,int>::iterator itr;
        int maxnum=0;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            maxnum=max(maxnum,itr->second);
        }
        return maxnum;
    }
};
