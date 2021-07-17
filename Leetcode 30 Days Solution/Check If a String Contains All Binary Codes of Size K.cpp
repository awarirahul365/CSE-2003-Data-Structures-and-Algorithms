class Solution {
public:
    int getdecimal(string str)
    {
        int num=0;
        int counter=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            int val=(int)str[i]-48;
            num=num+val*pow(2,counter);
            counter++;
        }
        return num;
    }
    bool hasAllCodes(string s, int k) {
        
        
        if(s.length()<k)
        {
            return false;
        }
        else
        {
            int n=pow(2,k);
        vector<bool>vect(n,false);
        for(int i=0;i<s.length()-k+1;i++)
        {
            string str=s.substr(i,k);
            int outp=getdecimal(str);
            if(outp>=0 && outp<=n)
            {
                vect[outp]=true;
            }
        }
        bool ans=true;
        for(int i=0;i<n;i++)
        {
            if(vect[i]==false)
            {
                ans=false;
                break;
            }
        }
        return ans;
        }
    }
};
