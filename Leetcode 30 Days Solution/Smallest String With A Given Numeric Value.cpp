class Solution {
public:
    int sumofstring(string str)
    {
        int sum=0;
        for(int i=0;i<str.length();i++)
        {
            sum=sum+(int)str[i]-97+1;
        }
        return sum;
    }
    string getSmallestString(int n, int k) {
        
        string str="";
        for(int i=0;i<n;i++)
        {
            str=str+'a';
        }
        string outp="";
        int flag=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            for(int j=97;j<=122;j++)
            {
                str[i]=(char)j;
                int res=sumofstring(str);
                int diff=k-res;
                if(diff==0)
                {
                    outp=str;
                    flag=1;
                    break;
                }
                else if(diff<0)
                {
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        return outp;
    }
};
