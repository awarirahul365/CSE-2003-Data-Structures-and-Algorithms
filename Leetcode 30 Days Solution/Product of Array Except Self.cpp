class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<long long int>leftarr(n,1);
        vector<long long int>rightarr(n,1);
        vector<int>res;
        for(int i=1;i<leftarr.size();i++)
        {
            leftarr[i]=leftarr[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            rightarr[i]=rightarr[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            res.push_back(leftarr[i]*rightarr[i]);
        }
        return res;
        
    }
};
