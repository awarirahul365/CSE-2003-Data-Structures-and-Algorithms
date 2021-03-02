class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        vector<int>vect;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;   
        }
        //for two occurance
        unordered_map<int,int>::iterator itr;
        int ans1;
        int ans2;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            int n=itr->second;
            if(n==2)
            {
                ans1=itr->first;
                break;
            }
        }
        for(int i=1;i<=10000;i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans2=i;
                break;
            }
        }
        vect.push_back(ans1);
        vect.push_back(ans2);
        return vect;
    }
};
