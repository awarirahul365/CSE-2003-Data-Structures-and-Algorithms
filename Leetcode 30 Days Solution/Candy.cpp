class Solution {
public:
    int candy(vector<int>& ratings) {
        
        //candy distribution problem
        int n=ratings.size();
        int dpleft[n];
        dpleft[0]=1;
        for(int i=1;i<ratings.size();i++)
        {
            if(ratings[i]<=ratings[i-1])
            {
                dpleft[i]=1;
            }
            else
            {
                dpleft[i]=dpleft[i-1]+1;
            }
        }
        int dpright[n];
        dpright[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]<=ratings[i+1])
            {
                dpright[i]=1;
            }
            else
            {
                dpright[i]=dpright[i+1]+1;
            }
        }
        int ans=0;
        for(int i=0;i<ratings.size();i++)
        {
            ans=ans+max(dpleft[i],dpright[i]);
        }
        return ans;
    }
};
