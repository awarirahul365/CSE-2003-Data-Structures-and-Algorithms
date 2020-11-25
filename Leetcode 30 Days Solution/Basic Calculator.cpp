class Solution {
public:
    //precedence operator
    int precedence(char op)
    {
        if(op=='+')
        {
            return 1;
        }
        else if(op=='-')
        {
            return 1;
        }
        else if(op=='*')
        {
            return 2;
        }
        else if(op=='/')
        {
            return 2;
        }
        else 
        {
            return 0;
        }
    }
    //Work of operator after poping
    int operatorresult(int a,int b,char op)
    {
        int ans;
        if(op=='+')
        {
            ans=a+b;
        }
        else if(op=='-')
        {
            ans=a-b;
        }
        else if(op=='*')
        {
            ans=a*b;
        }
        else if(op=='/')
        {
            ans=a/b;
        }
        return ans;
    }
    int calculate(string s) {
        
        stack<int>intstc;//operator one
        stack<char>opstc;//char stc
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                opstc.push(ch);
            }
            else if(isdigit(ch))
            {
                int p=(int)ch-48;
                intstc.push(p);
            }
            else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
            {
                while(opstc.size()>0 && opstc.top()!='(' && precedence(ch)<=precedence(opstc.top()))
                {
                    int b=intstc.top();
                    intstc.pop();
                    int a=intstc.top();
                    intstc.pop();
                    char op=opstc.top();
                    opstc.pop();
                    int res;
                    res=operatorresult(a,b,op);
                    intstc.push(res);
                }
                opstc.push(ch);
            }
            else if(ch==')')
            {
                while(opstc.top()!='(')
                {
                    int b=intstc.top();
                    intstc.pop();
                    int a=intstc.top();
                    intstc.pop();
                    char op=opstc.top();
                    opstc.pop();
                    int res;
                    res=operatorresult(a,b,op);
                    intstc.push(res);
                }
                opstc.pop();
            }
            else if(ch==' ')
            {
                continue;
            }
        }
        while(!opstc.empty())
        {
            int b=intstc.top();
            intstc.pop();
            int a=intstc.top();
            intstc.pop();
            char op=opstc.top();
            opstc.pop();
            int res;
            res=operatorresult(a,b,op);
            intstc.push(res);
        }
        return intstc.top();
    }
};
