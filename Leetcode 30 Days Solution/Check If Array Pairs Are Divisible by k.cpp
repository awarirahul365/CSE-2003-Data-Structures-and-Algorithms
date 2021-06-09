class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        bool flag=true;
        int freq[k];
        for(int i=0;i<k;i++)
        {
            freq[i]=0;
        }
        for(int i=0;i<arr.size();i++)
        {
            int rem=arr[i]%k;
            if(rem<0)
            {
                rem=rem+k;
            }
            freq[rem]++;
        }
        if(k%2==0)
        {
            for(int i=0;i<k;i++)
            {
                if(i==0)
                {
                    if(freq[i]%2!=0)
                    {
                        flag=false;
                        break;
                    }
                }
                else if(i==(k/2))
                {
                    if(freq[i]%2!=0)
                    {
                        flag=false;
                        break;
                    }
                }
                else
                {
                    if(freq[i]!=freq[k-i])
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                if(i==0)
                {
                    if(freq[i]%2!=0)
                    {
                        flag=false;
                        break;
                    }
                }
                else
                {
                    if(freq[i]!=freq[k-i])
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        return flag;
    }
};
