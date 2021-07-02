class Solution {
public:
    typedef pair<int,int> np;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int>ans;
        priority_queue <np, vector<np>, greater<np> > pq;
        for(int i=0;i<arr.size();i++)
        {
            int diff=abs(arr[i]-x);
            pq.push({diff,arr[i]});
        }
        int counter=0;
        while(!pq.empty())
        {
            auto val=pq.top();
            pq.pop();
            if(counter==k)
            {
                break;
            }
            else
            {
                ans.push_back(val.second);
                counter++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
