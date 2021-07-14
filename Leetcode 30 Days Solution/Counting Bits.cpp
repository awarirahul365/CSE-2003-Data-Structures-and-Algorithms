class Solution {
public:
    int setbits(int val)
    {
        int count=0;
        while(val>0)
        {
            val=val&(val-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            int outp;
            outp=setbits(i);
            ans.push_back(outp);
        }
        return ans;
    }
};
