class Solution {
public:
    vector<int> getRow(int numRows) {
        
        vector<vector<int>>vect;
        vector<int>temp;
        for(int i=1;i<=numRows+1;i++)
        {
            if(i==1)
            {
                temp.push_back(1);
                vect.push_back(temp);
                temp.clear();
            }
            else if(i==2)
            {
                temp.push_back(1);
                temp.push_back(1);
                vect.push_back(temp);
                temp.clear();
            }
            else
            {
                int startpointer=0;
                int nextpointer=1;
                for(int j=0;j<i;j++)
                {
                    if(j==0)
                    {
                        temp.push_back(1);
                    }
                    else if(j==i-1)
                    {
                        temp.push_back(1);
                    }
                    else
                    {
                        temp.push_back(vect[i-2][startpointer]+vect[i-2][nextpointer]);
                        startpointer++;
                        nextpointer++;
                    }
                }
                vect.push_back(temp);
                temp.clear();
            }
        }
        vector<int>res;
        for(int i=0;i<vect[numRows].size();i++)
        {
            res.push_back(vect[numRows][i]);
        }
        return res;
    }
};
