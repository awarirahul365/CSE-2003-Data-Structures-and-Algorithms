class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int i=0;
        int flag=true;
        vector<int>vect;
        bool f;
        while(i<nums.size())
        {
            int curr_num=nums[i];
            if(curr_num==1)
            {
                int count=0;
                f=false;
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]==0)
                    {
                        count++;
                    }
                    else if(nums[j]==1)
                    {
                        f=true;
                        break;
                    }
                }
                if(count==0 && i==nums.size()-1)
                {
                    i++;
                }
                else if(f==false)
                {
                    i++;
                }
                else if(f==true)
                {
                    vect.push_back(count);
                    i=i+count+1;
                }
            }
            else if(curr_num==0)
            {
                i++;
            }
        }
        for(int p=0;p<vect.size();p++)
        {
            if(vect[p]<k)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};
