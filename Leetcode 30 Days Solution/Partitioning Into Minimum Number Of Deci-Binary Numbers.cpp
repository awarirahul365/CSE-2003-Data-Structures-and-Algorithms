class Solution {
public:
    int minPartitions(string n) {
        
        int maxelement=-1;
        for(int i=0;i<n.length();i++)
        {
            int p=(int)n[i]-48;
            maxelement=max(p,maxelement);
        }
        return maxelement;
    }
};
