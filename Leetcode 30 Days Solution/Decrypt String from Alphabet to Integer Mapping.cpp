class Solution {
public:
    string freqAlphabets(string s) {
        
        string res="";
        if(s.length()<3)
        {
            for(int i=0;i<s.length();i++)
            {
                int p=(int)s[i]-48;
                char ch=(char)96+p;
                string temp="";
                temp=temp+ch;
                res=res+ch;
            }
        }
        else
        {
            int j=0;
            while(j<s.length())
            {
                if(j+2<s.length() && s[j+2]=='#')
                {
                    int x1=(int)s[j]-48;
                    int x2=(int)s[j+1]-48;
                    int val=10*x1+x2;
                    char z=(char)96+val;
                    string g="";
                    g=g+z;
                    res=res+g;
                    j=j+3;
                }
                else
                {
                    int num=(int)s[j]-48;
                    char cp=(char)96+num;
                    string t="";
                    t=t+cp;
                    res=res+cp;
                    j++;
                }
            }
        }
        return res;
    }
};
