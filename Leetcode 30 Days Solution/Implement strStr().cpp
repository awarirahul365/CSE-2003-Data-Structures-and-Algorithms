class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.length()==0 && needle.length()==0)
        {
            return 0;
        }
        else if(haystack.length()>0 && needle.length()==0)
        {
            return 0;
        }
        else if(haystack.length()==0 && needle.length()>0)
        {
            return -1;
        }
        else
        {
            int index=-1;
            int n=needle.length();
            int m=haystack.length();
            for(int i=0;i<m-n+1;i++)
            {
                string str=haystack.substr(i,n);
                if(str==needle)
                {
                    index=i;
                    break;
                }
            }
            return index;
        }
    }
};
