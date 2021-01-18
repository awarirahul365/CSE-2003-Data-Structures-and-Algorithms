class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int counter=0;
        while(low<high)
        {
            int n1=nums[low];
            int n2=nums[high];
            int sum=n1+n2;
            if(sum==k)
            {
                counter++;
                low++;
                high--;
            }
            else if(sum<k)
            {
                low++;
            }
            else if(sum>k)
            {
                high--;
            }
        }
        return counter;
    }
};
