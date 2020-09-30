class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            if(num>0)
            {
                s.insert(num);
            }
        }
        int res;
        for(int i=1;i<1000000;i++)
        {
            if(s.find(i)==s.end())
            {
                res=i;
                break;
            }
        }
        return res;
    }
};
