class Solution {
public:
    int callvalue(char ch)
    {
        int ans;
        if(ch=='I')
        {
            ans=1;
        }
        else if(ch=='V')
        {
            ans=5;
        }
        else if(ch=='X')
        {
            ans=10;
        }
        else if(ch=='L')
        {
            ans=50;
        }
        else if(ch=='C')
        {
            ans=100;
        }
        else if(ch=='D')
        {
            ans=500;
        }
        else if(ch=='M')
        {
            ans=1000;
        }
        return ans;
    }
    int romanToInt(string s) {
        
        int sum=0;
        int i=0;
        while(i<s.length())
        {
            char elm=s[i];
            if(elm=='I' && s[i+1]=='V')
            {
                sum=sum+4;
                i=i+2;
            }
            else if(elm=='I' && s[i+1]=='X')
            {
                sum=sum+9;
                i=i+2;
            }
            else if(elm=='X' && s[i+1]=='L')
            {
                sum=sum+40;
                i=i+2;
            }
            else if(elm=='X' && s[i+1]=='C')
            {
                sum=sum+90;
                i=i+2;
            }
            else if(elm=='C' && s[i+1]=='D')
            {
                sum=sum+400;
                i=i+2;
            }
            else if(elm=='C' && s[i+1]=='M')
            {
                sum=sum+900;
                i=i+2;
            }
            else 
            {
                int outp=callvalue(elm);
                sum=sum+outp;
                i++;
            }
        }
        return sum;
    }
};
