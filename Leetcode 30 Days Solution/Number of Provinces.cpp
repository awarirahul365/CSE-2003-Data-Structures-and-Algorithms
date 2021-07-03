class Solution {
public:
    void BFS(vector<int> &visited,vector<int> adj[],int source)
    {
        queue<int>q;
        q.push(source);
        visited[source]=1;
        while(!q.empty())
        {
            int sz=q.size();
            for(int m=0;m<sz;m++)
            {
                int node=q.front();
                q.pop();
                for(auto h:adj[node])
                {
                    if(visited[h]==0)
                    {
                        q.push(h);
                        visited[h]=1;
                    }
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        vector<int>adj[n];
        vector<int>visited(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                BFS(visited,adj,i);
                count++;
            }
        }
        return count;
    }
};
