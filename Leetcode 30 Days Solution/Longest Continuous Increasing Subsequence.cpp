class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int maxlength=0;
        int count;
        int i=0;
        int prevnum=0;
        while(i<nums.size())
        {
            int j;
            count=1;
            prevnum=nums[i];
            for(j=i+1;j<nums.size();j++)
            {
                if(prevnum<nums[j])
                {
                    count++;
                    prevnum=nums[j];
                }
                else
                {
                    break;
                }
            }
            maxlength=max(maxlength,count);
            i=j;
        }
        return maxlength;
        
    }
};
