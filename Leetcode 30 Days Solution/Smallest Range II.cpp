class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
        
        int r,l;
        int res;
        sort(A.begin(),A.end());
        res=A[A.size()-1]-A[0];
        r=A[A.size()-1]-K;
        l=A[0]+K;
        int m,n;
        for(int i=0;i<A.size()-1;i++)
        {
            m=max(A[i]+K,r);
            n=min(A[i+1]-K,l);
            res=min(res,m-n);
        }
        return res;
    }
};
