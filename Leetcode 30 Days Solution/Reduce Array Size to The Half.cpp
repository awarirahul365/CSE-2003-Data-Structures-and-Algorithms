class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int ans=0;
        int n=arr.size();
        int h=n/2;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            pq.push({itr->second,itr->first});
        }
        while(!pq.empty())
        {
            auto p=pq.top();
            pq.pop();
            int count=p.first;
            int num=p.second;
            n=n-count;
            if(n<=h)
            {
                break;
            }
            else
            {
                ans++;
            }
        }
        return ans+1;
    }
};
