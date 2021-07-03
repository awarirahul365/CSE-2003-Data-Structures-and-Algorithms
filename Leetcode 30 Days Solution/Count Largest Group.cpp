class Solution {
public:
    int countLargestGroup(int n) {
        
        int maxsize=0;
        unordered_map<int,vector<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int num=i;
            int sum=0;
            while(num>0)
            {
                int rem=num%10;
                sum=sum+rem;
                num=num/10;
            }
            mp[sum].push_back(num);
            int val=mp[sum].size();
            maxsize=max(maxsize,val);
        }
        int count=0;
        unordered_map<int,vector<int>>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second.size()==maxsize)
            {
                count++;
            }
        }
        return count;
    }
};
