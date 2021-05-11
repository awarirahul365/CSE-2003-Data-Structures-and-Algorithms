class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n=cardPoints.size();
        int z=n-k;
        int ans=0;
        for(int i=0;i<cardPoints.size();i++)
        {
            ans=ans+cardPoints[i];
        }
        if(z==0)
        {
            return ans;
        }
        else
        {
            vector<int>vect;
            int curr_sum=0;
            for(int i=0;i<z;i++)
            {
                curr_sum=curr_sum+cardPoints[i];
            }
            vect.push_back(curr_sum);
            for(int i=z;i<n;i++)
            {
                curr_sum=curr_sum+cardPoints[i]-cardPoints[i-z];
                vect.push_back(curr_sum);
            }
            int minval=INT_MAX;
            for(int i=0;i<n-z+1;i++)
            {
                minval=min(vect[i],minval);
            }
            return abs(ans-minval);
        }
    }
};
