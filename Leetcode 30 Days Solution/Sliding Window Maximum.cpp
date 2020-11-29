class Solution {
public:
    int calculatemax(deque<int> &dq)
    {
        int temp=-100000;
        for(int i=0;i<dq.size();i++)
        {
            temp=max(temp,dq[i]);
        }
        return temp;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>vect;
        deque<int>dq;
        for(int i=0;i<k;i++)
        {
            dq.push_back(nums[i]);
        }
        int maxlen=-100000;
        for(int i=0;i<k;i++)
        {
            maxlen=max(maxlen,dq[i]);
        }
        vect.push_back(maxlen);
        for(int i=k;i<nums.size();i++)
        {
            dq.push_back(nums[i]);
            dq.pop_front();
            int res;
            res=calculatemax(dq);
            vect.push_back(res);
        }
        return vect;
    }
};
