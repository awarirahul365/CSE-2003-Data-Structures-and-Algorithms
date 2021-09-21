class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        bool flag=false;
        queue<int>q;
        vector<bool>visited(arr.size(),false);
        q.push(start);
        visited[start]=true;
        while(!q.empty())
        {
            int index=q.front();
            q.pop();
            int val=arr[index];
            if(val==0)
            {
                flag=true;
                break;
            }
            if(index+arr[index]>=0 && index+arr[index]<arr.size() && visited[index+arr[index]]==false)
            {
                q.push(index+arr[index]);
                visited[index+arr[index]]=true;
            }
            if(index-arr[index]>=0 && index-arr[index]<arr.size() && visited[index-arr[index]]==false)
            {
                q.push(index-arr[index]);
                visited[index-arr[index]]=true;
            }
        }
        return flag;
        
    }
};
