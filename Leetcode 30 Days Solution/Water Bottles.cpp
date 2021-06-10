class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int initcount=numBottles;
        while(numBottles>=numExchange)
        {
            int purchase=numBottles/numExchange;
            initcount=initcount+purchase;
            int rem=numBottles%numExchange;
            numBottles=purchase+rem;
        }
        return initcount;
        
        
    }
};
