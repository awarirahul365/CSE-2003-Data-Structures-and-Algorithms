class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int pos=0;
        for(int i=0;i<logs.size();i++)
        {
            string str=logs[i];
            if(str=="../" && pos>0)
            {
                pos--;
            }
            else if(str=="../" && pos==0)
            {
                pos=pos+0;
            }
            else if(str=="./")
            {
                pos=pos+0;
            }
            else
            {
                pos++;
            }
        }
        return pos;
    }
};
