class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>stc;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                if(stc.size()>=2)
                {
                    int num1=stc.top();
                    stc.pop();
                    int num2=stc.top();
                    stc.pop();
                    int res;
                    if(tokens[i]=="+")
                    {
                        res=num2+num1;
                    }
                    else if(tokens[i]=="-")
                    {
                        res=num2-num1;
                    }
                    else if(tokens[i]=="*")
                    {
                        res=num2*num1;
                    }
                    else
                    {
                        res=num2/num1;
                    }
                    stc.push(res);
                }
            }
            else
            {
                int p=stoi(tokens[i]);
                stc.push(p);
            }
        }
        return stc.top();
    }
};
