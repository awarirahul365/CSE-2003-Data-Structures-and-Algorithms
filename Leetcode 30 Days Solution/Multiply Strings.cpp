class Solution {
public:
    string getfunc(string str1,string str2)
    {
        int flag1=0;
        int flag2=0;
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!='0')
            {
                flag1=1;
                break;
            }
        }
        for(int i=0;i<str2.length();i++)
        {
            if(str2[i]!='0')
            {
                flag2=1;
                break;
            }
        }
        if(str1.length()==0 || str2.length()==0 || flag1==0 || flag2==0)
        {
            return "0";
        }
        else
        {
            int n1=str1.length();
            int n2=str2.length();
            vector<int>vect(n1+n2,0);
            int carry=0;
            int sum=0;
            int pf=0;
            for(int i=n2-1;i>=0;i--)
            {
                int val1=(int)str1[i]-48;
                int k=vect.size()-1-pf;
                carry=0;
                for(int j=n1-1;j>=0;j--)
                {
                    int val2=(int)str2[j]-48;
                    int prod=val1*val2+carry+vect[k];
                    int sum=prod%10;
                    carry=prod/10;
                    vect[k]=sum;
                    k--;
                }
                if(carry>0)
                {
                    int s=carry+vect[k];
                    int c=s%10;
                    carry=carry/10;
                    vect[k]=c;
                }
                pf++;
            }
            string ans="";
            if(vect[0]==0)
            {
                int index;
                for(int i=0;i<vect.size();i++)
                {
                    if(vect[i]!=0)
                    {
                        index=i;
                        break;
                    }
                }
                for(int i=index;i<vect.size();i++)
                {
                    ans=ans+to_string(vect[i]);
                }
            }
            else
            {   
                for(int i=0;i<vect.size();i++)
                {
                    ans=ans+to_string(vect[i]);
                }
            }
            return ans;
        }
    }
    string multiply(string num1, string num2) {
        
        string outp;
        int len1=num1.length();
        int len2=num2.length();
        if(len1>len2)
        {
            int diff=len1-len2;
            string t="";
            for(int i=0;i<diff;i++)
            {
                t=t+"0";
            }
            num2=t+num2;
        }
        if(len2>len1)
        {
            int d=len2-len1;
            string r="";
            for(int i=0;i<d;i++)
            {
                r=r+"0";
            }
            num1=r+num1;
        }
        outp=getfunc(num1,num2);
        return outp;
    }
};
