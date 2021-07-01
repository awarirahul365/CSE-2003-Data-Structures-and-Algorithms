class Solution {
public:
    string makeGood(string s) {
        
        if(s.length()==1)
        {
            return s;
        }
        else
        {
            stack<char>stc;
            for(int i=0;i<s.length();i++)
            {
                if(stc.empty())
                {
                    stc.push(s[i]);
                }
                else
                {
                    char ch1=stc.top();
                    char ch2=s[i];
                    char temp1=(char)tolower(ch2);
                    char temp2=(char)tolower(ch1);
                    if((ch1==temp1 && isupper(ch2)) ||(ch2==temp2 && isupper(ch1)))
                    {
                        stc.pop();
                    }
                    else
                    {
                        stc.push(s[i]);
                    }
                }
            }
            string str="";
            while(!stc.empty())
            {
                str=str+stc.top();
                stc.pop();
            }
            reverse(str.begin(),str.end());
            return str;
        }
    }
};
