class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>vect;
        int flag=0;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            if(nums[low]!= target && nums[high]!=target)
            {
                low++;
                high--;
            }
            else if(nums[low]==target && nums[high]!=target)
            {
                high--;
            }
            else if(nums[low]!=target && nums[high]==target)
            {
                low++;
            }
            else if(nums[low]==target && nums[high]==target)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            vect.push_back(low);
            vect.push_back(high);
        }
        else
        {
            vect.push_back(-1);
            vect.push_back(-1);
        }
        return vect;
    }
};
