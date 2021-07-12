class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        //get next greater for each day
        //try by indexes
        vector<int>vect;
        vect.push_back(0);
        stack<int>stc;
        stc.push(temp.size()-1);
        for(int i=temp.size()-2;i>=0;i--)
        {
            if(stc.empty())
            {
                vect.push_back(0);
                stc.push(i);
            }
            else
            {
                int tp=stc.top();
                int stcnum=temp[tp];
                int num=temp[i];
                if(stcnum>num)
                {
                    vect.push_back(1);
                    stc.push(i);
                }
                else
                {
                    while(!stc.empty() && temp[i]>=temp[stc.top()])
                    {
                        stc.pop();
                    }
                    if(stc.empty())
                    {
                        vect.push_back(0);
                        stc.push(i);
                    }
                    else
                    {
                        int count=stc.top()-i;
                        vect.push_back(count);
                        stc.push(i);
                    }
                }
            }
        }
        reverse(vect.begin(),vect.end());
        return vect;
    }
};
