// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int ans=-1;
        int low=1;
        int high=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)==true && (isBadVersion(mid-1)==false || mid==1))
            {
                ans=mid;
                break;
            }
            else if(isBadVersion(mid)==true && isBadVersion(mid-1)==true)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
