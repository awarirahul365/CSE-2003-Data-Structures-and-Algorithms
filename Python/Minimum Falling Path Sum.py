class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        
        row=len(matrix)
        col=len(matrix[0])
        listtemp=[[0 for c in range(col)]for r in range(row)]
        for i in range(0,col):
            listtemp[0][i]=matrix[0][i]
        i=1
        while i<row:
            
            for j in range(0,col):
                if j==0 :
                    listtemp[i][j]=min(matrix[i][j]+listtemp[i-1][j],matrix[i][j]+listtemp[i-1][j+1])
                elif j==col-1:
                    listtemp[i][j]=min(matrix[i][j]+listtemp[i-1][j],matrix[i][j]+listtemp[i-1][j-1])
                else:
                    listtemp[i][j]=min(matrix[i][j]+listtemp[i-1][j-1],min(matrix[i][j]+listtemp[i-1][j],matrix[i][j]+listtemp[i-1][j+1]))
            i=i+1
        
        ans=100000
        for i in range(0,col):
            ans=min(listtemp[row-1][i],ans)
        return ans
        
        
        
