class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        int target=nums[mid];
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int diff=abs(target-nums[i]);
            sum=sum+diff;
        }
        return sum;
    }
};
