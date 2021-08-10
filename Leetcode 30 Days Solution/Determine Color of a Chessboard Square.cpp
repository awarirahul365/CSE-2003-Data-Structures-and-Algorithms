class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        char ch1=coordinates[0];
        char ch2=coordinates[1];
        char ans;
        if(ch1=='a' || ch1=='c' || ch1=='e' || ch1=='g')
        {
            int val1=(int)ch2-48;
            if(val1%2!=0)
            {
                ans='b';
            }
            else
            {
                ans='w';
            }
        }
        else
        {
            int val2=(int)ch2-48;
            if(val2%2!=0)
            {
                ans='w';
            }
            else
            {
                ans='b';
            }
        }
        if(ans=='b')
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
