class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int count1=0;
        int count2=0;
        int i=0;
        int flag=false;
        while(i<bits.size())
        {
            if(i==bits.size()-1)
            {
                flag=true;
                break;
            }
            else
            {
                if((bits[i]==1 && bits[i+1]==0) || (bits[i]==1 && bits[i+1]==1))
                {
                    count2++;
                    i=i+2;
                }
                else
                {
                    count1++;
                    i++;
                }
            }
        }
        return flag;
    }
};
