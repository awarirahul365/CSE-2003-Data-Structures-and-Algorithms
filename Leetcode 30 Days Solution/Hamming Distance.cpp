class Solution {
public:
    string func(int num)
    {
        string temp="";
        while(num>0)
        {
            int rem=num%2;
            temp=temp+to_string(rem);
            num=num/2;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
    int hammingDistance(int x, int y) {
        
        int count=0;
        string str1=func(x);
        string str2=func(y);
        if(str1.length()!=str2.length())
        {
            if(str1.length()>str2.length())
            {
                int diff=str1.length()-str2.length();
                string r="";
                for(int i=0;i<diff;i++)
                {
                    r=r+"0";
                }
                str2=r+str2;
            }
            else
            {
                int d=str2.length()-str1.length();
                string y="";
                for(int i=0;i<d;i++)
                {
                    y=y+"0";
                }
                str1=y+str1;
            }
        }
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!=str2[i])
            {
                count++;
            }
        }
        return count;
    }
};
