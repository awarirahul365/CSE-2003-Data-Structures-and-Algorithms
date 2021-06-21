class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        vector<vector<int>>vect;
        vector<int>temp;
        int i=0;
        int count;
        while(i<s.length())
        {
            char ch=s[i];
            count=1;
            int j;
            for(j=i+1;j<s.length();j++)
            {
                if(s[j]==ch)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count>=3)
            {
                temp.push_back(i);
                temp.push_back(j-1);
                vect.push_back(temp);
                temp.clear();
            }
            i=j;
        }
        return vect;
    }
};
