class Solution {
public:
    int findTheWinner(int n, int k) {
        
        if(k==1)
        {
            return n;
        }
        else
        {
            queue<int>q;
            for(int i=1;i<=n;i++)
            {
                q.push(i);
            }
            while(true)
            {
                for(int i=0;i<k-1;i++)
                {
                    int player=q.front();
                    q.pop();
                    q.push(player);
                }
                q.pop();
                if(q.size()==1)
                {
                    break;
                }
            }
            return q.front();
        }
    }
};
