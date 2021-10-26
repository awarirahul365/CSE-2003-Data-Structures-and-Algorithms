class Solution {
public:
    string func(char ch)
    {
        if(ch=='2')
        {
            return "abc";
        }
        else if(ch=='3')
        {
            return "def";
        }
        else if(ch=='4')
        {
            return "ghi";
        }
        else if(ch=='5')
        {
            return "jkl";
        }
        else if(ch=='6')
        {
            return "mno";
        }
        else if(ch=='7')
        {
            return "pqrs";
        }
        else if(ch=='8')
        {
            return "tuv";
        }
        else if(ch=='9')
        {
            return "wxyz";
        }
        else
        {
            return "$";
        }
    }
    vector<string> letterCombinations(string digits) {
        
        
        vector<string>vect;
        if(digits.length()==0)
        {
            return vect;
        }
        else
        {
            char firstch=digits[0];
            string outpfirst=func(firstch);
            queue<string>q;
            for(int i=0;i<outpfirst.length();i++)
            {
                string y="";
                y=y+outpfirst[i];
                q.push(y);
            }
            for(int i=1;i<digits.length();i++)
            {
                string res=func(digits[i]);
                int sz=q.size();
                for(int j=0;j<sz;j++)
                {
                    string m=q.front();
                    q.pop();
                    for(int k=0;k<res.length();k++)
                    {
                        string putelement=m+res[k];
                        q.push(putelement);
                    }
                }
            }
            while(!q.empty())
            {
                string t=q.front();
                q.pop();
                vect.push_back(t);
            }
            return vect;
        }
        
        
    }
};
