class Solution {
public:
    bool check(vector<int>& nums) {
        
        if(is_sorted(nums.begin(),nums.end()))
        {
            return true;
        }
        else
        {
            int peakpoint=-1;
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i]<nums[i-1])
                {
                    peakpoint=i;
                    break;
                }
            }
            if(peakpoint==-1)
            {
                return true;
            }
            else
            {
                
                if(peakpoint==nums.size()-1)
                {
                    if(nums[peakpoint]>nums[0] && nums[peakpoint]<nums[peakpoint-1])
                    {
                        return false;
                    }
                    else
                    {
                        return true;
                    }
                }
                else
                {
                    int minelement=nums[0];
                    bool flag=true;
                    for(int i=peakpoint+1;i<nums.size();i++)
                    {
                        if(nums[i]<nums[i-1] || nums[i]>minelement)
                        {
                            flag=false;
                            break;
                        }
                    }
                    return flag;
                }
            }
        }
        
    }
};
