class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        //case1 between two people
        int index1;
        int index2;
        int ans;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==1)
            {
                index1=i;
                break;
            }
        }
        for(int i=seats.size()-1;i>=0;i--)
        {
            if(seats[i]==1)
            {
                index2=i;
                break;
            }
        }
        int dist1,dist2;
        dist1=index1;
        dist2=seats.size()-index2-1;
        if(index1==index2)
        {
            ans=max(dist1,dist2);
        }
        else
        {
            int prevfirst=index1;
            int countzero=0;
            int outp=INT_MIN;
            for(int j=index1+1;j<=index2;j++)
            {
                if(seats[j]==1)
                {
                    if(countzero%2!=0)
                    {
                        outp=max(outp,(countzero+1)/2);
                    }
                    else
                    {
                        outp=max(outp,countzero/2);
                    }
                    countzero=0;
                }
                else
                {
                    countzero++;
                }
            }
            ans=outp;
            ans=max(ans,dist1);
            ans=max(ans,dist2);
        }
        return ans;
    }
};
