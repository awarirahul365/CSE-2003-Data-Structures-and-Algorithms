class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>vect;
        if(nums.size()<4)
        {
            return vect;
        }
        else
        {
            sort(nums.begin(),nums.end());
        set<vector<int> >s;
        vector<int>temp;
        for(int i=0;i<nums.size()-3;i++)
        {
            int num1=nums[i];
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int num2=nums[j];
                int sum=num1+num2;
                int reqsum=target-sum;
                int low=j+1;
                int high=nums.size()-1;
                while(low<high)
                {
                    if(nums[low]+nums[high]==reqsum)
                    {
                        temp.push_back(num1);
                        temp.push_back(num2);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        if(s.find(temp)==s.end())
                        {
                            s.insert(temp);
                            vect.push_back(temp);
                            low++;
                            high--;
                        }
                        else
                        {
                            low++;
                            high--;
                        }
                        temp.clear();
                        /*if(s.find(temp)!=s.end())
                        {
                            s.insert(temp);
                            vect.push_back(temp);
                            low++;
                            high--;
                        }
                        else
                        {
                            low++;
                            high--;
                        }
                        temp.clear();*/
                    }
                    else if(nums[low]+nums[high]<reqsum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return vect;
        }
    }
};
