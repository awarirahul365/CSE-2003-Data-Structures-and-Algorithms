class Solution:
    def gridGame(self, grid: List[List[int]]) -> int:
        
        row=len(grid)
        col=len(grid[0])
        indexdrop=0
        dp=[[0 for c in range(col)]for r in range(row)]
        dp[0][0]=grid[0][0]
        for i in range(1,col):
            dp[0][i]=grid[0][i]+dp[0][i-1]
        for i in range(1,row):
            dp[i][0]=grid[i][0]+dp[i-1][0]
        for i in range(1,row):
            for j in range(1,col):
                right=grid[i][j]+dp[i][j-1]
                down=grid[i][j]+dp[i-1][j]
                if down>right:
                    indexdrop=j
                    break
                else:
                    dp[i][j]=max(right,down)
        return indexdrop
            
                    
        
