class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        profit=0
        minval=prices[0]
        listtemp=[]
        listtemp.append(minval)
        for i in range(1,len(prices)):
            minval=min(minval,prices[i])
            listtemp.append(minval)
        for i in range(0,len(listtemp)):
            profit=max(profit,prices[i]-listtemp[i])
        
        return profit
            
        
