class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>vect;
        vector<int>temp;
        int n=nums.size();
        int power=pow(2,n);
        for(int i=0;i<power;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i & (1<<j))
                {
                    temp.push_back(nums[j]);
                }
            }
            vect.push_back(temp);
            temp.clear();
        }
        return vect;
    }
};
