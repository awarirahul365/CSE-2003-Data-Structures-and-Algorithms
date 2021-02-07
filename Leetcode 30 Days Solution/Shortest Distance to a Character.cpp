class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int>vect;
        for(int i=0;i<s.length();i++)
        {
            char firstchar=s[i];
            int mindist=100000;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==c)
                {
                    int diff=abs(j-i);
                    mindist=min(mindist,diff);
                }
            }
            vect.push_back(mindist);
        }
        return vect;
    }
};
