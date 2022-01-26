class Solution {
public:
    int countElements(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        vector<int>vect;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                vect.push_back(nums[i]);
            }
            mp[nums[i]]++;
        }
        if(vect.size()<=2)
        {
            return 0;
        }
        else
        {
            int count=0;
            sort(vect.begin(),vect.end());
            for(int i=1;i<vect.size()-1;i++)
            {
                int prevnum=vect[i-1];
                int nxtnum=vect[i+1];
                if(vect[i]>prevnum && vect[i]<nxtnum)
                {
                    count=count+mp[vect[i]];
                }
            }
            return count;
        }
    }
};
