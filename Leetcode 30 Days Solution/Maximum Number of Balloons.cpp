class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int res=0;
        int countb=0;
        int counta=0;
        int countn=0;
        int counto=0;
        int countl=0;
        for(int i=0;i<text.length();i++)
        {
            if(text[i]=='b')
            {
                countb++;
            }
            else if(text[i]=='a')
            {
                counta++;
            }
            else if(text[i]=='l')
            {
                countl++;
            }
            else if(text[i]=='o')
            {
                counto++;
            }
            else if(text[i]=='n')
            {
                countn++;
            }
        }
        int minsingle=min(counta,min(countb,countn));
        int mindob=min(counto,countl);
        if(minsingle>=1 && mindob>=2)
        {
            while(minsingle>=1 && mindob>=2)
            {
                minsingle--;
                mindob=mindob-2;
                res++;
            }
            return res;
        }
        else
        {
            return 0;
        }
    }
};
