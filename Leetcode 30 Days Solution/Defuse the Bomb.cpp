class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        vector<int>vect;
        if(k==0)
        {
            for(int i=0;i<code.size();i++)
            {
                vect.push_back(0);
            }
        }
        else if(k>0)
        {
            int sz=code.size();
            for(int i=0;i<code.size();i++)
            {
                int sum=0;
                int counter=0;
                int j=i+1;
                while(counter<k)
                {
                    int index=j%sz;
                    sum=sum+code[index];
                    counter++;
                    j++;
                }
                vect.push_back(sum);
            }
        }
        else
        {
            int val=code.size();
            for(int i=0;i<code.size();i++)
            {
                int temp=0;
                int c=0;
                int x=i-1;
                k=abs(k);
                while(c<k)
                {
                    if(x<0)
                    {
                        x=x+val;
                    }
                    int p=x%val;
                    temp=temp+code[p];
                    c++;
                    x--;
                }
                vect.push_back(temp);
            }
        }
        return vect;
    }
};
