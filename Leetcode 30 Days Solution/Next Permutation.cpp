class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int index1=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                index1=i;
                break;
            }
        }
        if(index1==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int val=nums[index1];
            int index2;
            for(int i=nums.size()-1;i>index1;i--)
            {
                if(nums[i]>val)
                {
                    index2=i;
                    break;
                }
            }
            int temp=nums[index1];
            nums[index1]=nums[index2];
            nums[index2]=temp;
            int low=index1+1;
            int high=nums.size()-1;
            while(low<high)
            {
                int t=nums[low];
                nums[low]=nums[high];
                nums[high]=t;
                low++;
                high--;
            }
        }
    }
};
