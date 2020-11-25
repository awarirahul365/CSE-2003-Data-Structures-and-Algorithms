class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        bool res;
        if(arr.size()<3)
        {
            res=false;
        }
        else 
        {
            int left=0;
            int right=arr.size()-1;
            while(left<right)
            {
                if(arr[left+1]>arr[left])
                {
                    left++;
                }
                else if(arr[right-1]>arr[right])
                {
                    right--;
                }
                else
                {
                    break;
                }
            }
            if(left!=0 && right!=arr.size()-1 && left==right)
            {
                res=true;
            }
            else
            {
                res=false;
            }
        }
        return res;
        
    }
};
