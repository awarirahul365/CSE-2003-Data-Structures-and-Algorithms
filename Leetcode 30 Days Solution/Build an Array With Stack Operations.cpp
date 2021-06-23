class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        int lastindex=target[target.size()-1];
        vector<string>res;
        int tindex=0;
        for(int i=1;i<=lastindex;i++)
        {
            int targetnum=target[tindex];
            int val=i;
            if(val==targetnum)
            {
                res.push_back("Push");
                tindex++;
            }
            else if(val!=targetnum)
            {
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};
