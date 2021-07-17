class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s==goal)
        {
            return true;
        }
        else
        {
            bool flag=false;
            for(int i=0;i<s.length();i++)
            {
                char temp=s[0];
                int j;
                for(j=0;j<s.length()-1;j++)
                {
                    s[j]=s[j+1];
                }
                s[j]=temp;
                if(s==goal)
                {
                    flag=true;
                    break;
                }
            }
            return flag;
        }
        
    }
};
