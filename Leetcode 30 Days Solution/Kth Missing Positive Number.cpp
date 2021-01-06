class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++)
        {
            s.insert(arr[i]);
        }
        int count=1;
        int ans;
        for(int i=1;i<=10000;i++)
        {
            if(s.find(i)==s.end())
            {
                if(count==k)
                {
                    ans=i;
                    break;
                }
                else
                {
                    count++;
                }
            }
        }
        return ans;
    }
};
