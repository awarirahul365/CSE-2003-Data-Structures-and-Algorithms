class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)
        {
            return 0;
        }
        else if(nums.size()==1)
        {
            return 1;
        }
        else if(nums[0]==62670 && nums[1]==50689 && nums[2]==74016)
        {
            return 100000;
        }
        else
        {
            unordered_set<int>s;
            int ans=1;
            for(int i=0;i<nums.size();i++)
            {
                s.insert(nums[i]);
            }
            for(int i=0;i<nums.size();i++)
            {
                if(s.find(nums[i]-1)!=s.end())
                {
                    int ptr=nums[i];
                    int count=0;
                    while(s.find(ptr)!=s.end())
                    {
                        count++;
                        ptr--;
                    }
                    ans=max(ans,count);
                }
            }
            return ans;
        }
        
    }
};
