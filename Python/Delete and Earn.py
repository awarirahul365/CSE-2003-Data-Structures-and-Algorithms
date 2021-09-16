class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        
        listtemp=[]
        for i in range(0,10005):
            listtemp.append(0)
        for i in nums:
            listtemp[i]=listtemp[i]+i
        dp=[]
        for i in range(0,10005):
            dp.append(0)
        dp[1]=listtemp[1]
        dp[2]=max(listtemp[1],listtemp[2])
        for i in range(3,10005):
            dp[i]=max(dp[i-1],dp[i-2]+listtemp[i])
        
        return max(dp[10003],dp[10004])
