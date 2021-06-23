class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        vector<int>vect;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            int rem=target-arr[i];
            if(mp.find(rem)!=mp.end())
            {
                vect.push_back(i);
                vect.push_back(mp[rem]);
                break;
            }
            mp[arr[i]]=i;
        }
        return vect;
    }
};
