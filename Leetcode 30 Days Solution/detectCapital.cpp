class Solution {
public:
    bool detectCapitalUse(string word) {
       
        bool flag=false;
        char ch=word[0];
        if(isupper(ch))
        {
            int count1=0;
            int count2=0;
            for(int i=1;i<word.length();i++)
            {
                if(islower(word[i]))
                {
                    count1++;
                }
            }
            for(int j=1;j<word.length();j++)
            {
                if(isupper(word[j]))
                {
                    count2++;
                }
            }
            if(count1==word.size()-1 || count2==word.size()-1)
            {
                flag=true;
            }
        }
        else if(islower(ch))
        {
            int count3=0;
            for(int k=1;k<word.size();k++)
            {
                if(islower(word[k]))
                {
                    count3++;
                }
            }
            if(count3==word.size()-1)
            {
                flag=true;
            }
        }
        return flag;
    }
};
