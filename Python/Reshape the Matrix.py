class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        
        if len(mat)*len(mat[0])!=r*c:
            return mat
        else:
            listtemp=[[0 for col in range(c)]for row in range(r)]
            matrow=len(mat)
            matcol=len(mat[0])
            start=0
            end=0
            for i in range(0,matrow):
                for j in range(0,matcol):
                    if end<c:
                        listtemp[start][end]=mat[i][j]
                        end=end+1
                    else:
                        start=start+1
                        end=0
                        listtemp[start][end]=mat[i][j]
                        end=end+1
            return listtemp
                
