class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int count10=0;
        int count5=0;
        int flag=1;
        for(int i=0;i<bills.size();i++)
        {
            int amount=bills[i];
            if(amount==5)
            {
                count5++;
            }
            else if(amount==10 && count5>0)
            {
                count10++;
                count5--;
            }
            else if(amount==20 && count5>0 && count10>0)
            {
                count10--;
                count5--;
            }
            else if(amount==20 && count5>=3 && count10<=0)
            {
                count5=count5-3;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
