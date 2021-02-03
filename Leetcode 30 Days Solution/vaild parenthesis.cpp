class Solution {
public:
    bool isValid(string x) {
        
        stack<char>stc;
        bool flag=true;
        for(int i=0;i<x.length();i++)
        {
            char ch=x[i];
            if(ch=='{' || ch=='(' || ch=='[')
            {
                stc.push(ch);
            }
            else if(ch==')' || ch=='}' || ch==']')
            {
                if(stc.empty()==true)
                {
                    flag=false;
                    break;
                }
                else if(!stc.empty())
                {
                    char up=stc.top();
                    if(ch==')' && up=='(' || ch=='}' && up=='{' || ch==']' && up=='[')
                    {
                        stc.pop();
                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        bool ans;
        if(flag==false)
        {
            ans=false;   
        }
        else if(flag==true)
        {
            if(stc.size()==0)
            {
                ans=true;
            }
            else
            {
                ans=false;
            }
        }
        return ans;
    }
};
