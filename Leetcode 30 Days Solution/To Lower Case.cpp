class Solution {
public:
    string toLowerCase(string s) {
        
        string str="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            int asc=(int)ch;
            if(asc>=65 && asc<=90)
            {
                int diff=asc-65;
                int val=97+diff;
                char p=(char)val;
                str=str+p;
            }
            else
            {
                str=str+ch;
            }
        }
        return str;
    }
};
