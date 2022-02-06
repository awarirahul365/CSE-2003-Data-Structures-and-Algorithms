class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count=0;
        if(nums.size()==1)
        {
            return 1;
        }
        else
        {
            int element=nums[0];
            int tempcount=1;
            int ptr=0;
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i]==element)
                {
                    tempcount=tempcount+1;
                }
                else
                {
                    if(tempcount>=2)
                    {
                        count=count+2;
                        nums[ptr++]=element;
                        nums[ptr++]=element;
                    }
                    else
                    {
                        count=count+tempcount;
                        nums[ptr++]=element;
                    }
                    element=nums[i];
                    tempcount=1;
                }
            }
            if(tempcount>=2)
            {
                count=count+2;
                nums[ptr++]=element;
                nums[ptr++]=element;
            }
            else
            {
                count=count+tempcount;
                nums[ptr++]=element;
            }
            return count;
        }
    }
};
