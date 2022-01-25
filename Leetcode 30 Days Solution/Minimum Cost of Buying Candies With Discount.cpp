class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        int arrlen=cost.size();
        if(arrlen<=2)
        {
            int tempsum=0;
            for(int i=0;i<arrlen;i++)
            {
                tempsum=tempsum+cost[i];
            }
            return tempsum;
        }
        else
        {
            int sum=0;
            priority_queue<int>pq;
            for(int i=0;i<cost.size();i++)
            {
                pq.push(cost[i]);
            }
            while(pq.size()>1)
            {
                int buyfirst=pq.top();
                pq.pop();
                int buysec=pq.top();
                pq.pop();
                sum=sum+buyfirst+buysec;
                if(pq.size()==0)
                {
                    break;
                }
                else
                {
                    pq.pop();
                }
            }
            if(pq.size()!=0)
            {
                sum=sum+pq.top();
            }
            return sum;
        }
    }
};
