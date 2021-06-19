class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        int prefixsum=0;
        for(int i=0;i<arr.size();i++)
        {
            prefixsum=prefixsum+arr[i];
        }
        if(prefixsum%3!=0)
        {
            return false;
        }
        else
        {
            int reqval=prefixsum/3;
            int left;
            int right;
            int leftsum=0;
            int rightsum=0;
            for(int i=0;i<arr.size();i++)
            {
                leftsum=leftsum+arr[i];
                if(leftsum==reqval)
                {
                    left=i;
                    break;
                }
            }
            for(int i=arr.size()-1;i>=0;i--)
            {
                rightsum=rightsum+arr[i];
                if(rightsum==reqval)
                {
                    right=i;
                    break;
                }
            }
            if(left<right && left+1!=right)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
