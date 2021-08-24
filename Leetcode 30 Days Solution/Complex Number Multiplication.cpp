class Solution {
public:
    int imgpart(string temp2)
    {
        int index2;
        string str2="";
        string res2;
        int val2;
        for(int i=0;i<temp2.length();i++)
        {
            if(temp2[i]=='+')
            {
                index2=i;
                break;
            }
        }
        for(int i=index2+1;i<temp2.length()-1;i++)
        {
            str2=str2+temp2[i];
        }
        if(str2[0]=='-')
        {
            res2=str2.substr(1,str2.length()-1);
            val2=stoi(res2);
            val2=val2*(-1);
        }
        else
        {
            res2=str2;
            val2=stoi(res2);
        }
        return val2;
    }
    int realpart(string temp1)
    {
        int index1;
        string res1;
        string str1="";
        int val;
        for(int i=0;i<temp1.length();i++)
        {
            if(temp1[i]=='+')
            {
                index1=i;
                break;
            }
        }
        for(int j=index1-1;j>=0;j--)
        {
            str1=str1+temp1[j];
        }
        reverse(str1.begin(),str1.end());
        if(str1[0]=='-')
        {
            res1=str1.substr(1,str1.length()-1);
            val=stoi(res1);
            val=val*(-1);
        }
        else
        {
            res1=str1;
            val=stoi(res1);
        }
        return val;
    }
    string complexNumberMultiply(string num1, string num2) {
        
        int r1=realpart(num1);
        int r2=realpart(num2);
        int c1=imgpart(num1);
        int c2=imgpart(num2);
        int pt1=r1*r2;
        int pt2=c1*c2;
        int pt3=r1*c2+r2*c1;
        pt2=pt2*(-1);
        int real=pt1+pt2;
        int img=pt3;
        string s1=to_string(real);
        s1=s1+"+";
        string s2=to_string(img);
        s2=s2+"i";
        string outp="";
        outp=s1+s2;
        return outp;
    }
};
