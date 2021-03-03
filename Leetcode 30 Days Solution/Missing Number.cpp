class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int ans;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0;i<10000;i++)
        {
            if(s.find(i)==s.end())
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};
