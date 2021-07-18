class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            if(num%2==0)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }
        }
        unordered_map<int,int>mp;
        int count=0;
        int prefixsum=0;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum=prefixsum+nums[i];
            if(prefixsum==k)
            {
                count++;
            }
            if(mp.find(prefixsum-k)!=mp.end())
            {
                count=count+mp[prefixsum-k];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};
