class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>vect;
        if(nums.size()<3)
        {
            return vect;
        }
        else
        {
            vector<int>temp;
            sort(nums.begin(),nums.end());
            set<vector<int>>s;
            for(int i=0;i<nums.size()-2;i++)
            {
                int val=nums[i];
                int reqsum=0-val;
                int flag=0;
                int low=i+1;
                int high=nums.size()-1;
                temp.clear();
                while(low<high)
                {
                    if(reqsum==nums[low]+nums[high])
                    {
                        temp.push_back(val);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        if(s.find(temp)==s.end())
                        {
                            vect.push_back(temp);
                            s.insert(temp);
                            temp.clear();
                        }
                        temp.clear();
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<reqsum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
            return vect;
        }
    }
};
