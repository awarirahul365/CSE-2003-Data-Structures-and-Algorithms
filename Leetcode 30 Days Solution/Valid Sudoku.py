class Solution:
    def checkleft(self,board,x,y):
        ansleft=True
        setleft={'a'}
        for i in range(y,-1,-1):
            if board[x][i]=='.':
                continue
            else:
                if board[x][i] in setleft:
                    ansleft=False
                    break
                else:
                    setleft.add(board[x][i])
        return ansleft
    def checkdown(self,board,x,y):
        ansdown=True
        setdown={'a'}
        for i in range(x,9,1):
            if board[i][y]=='.':
                continue
            else:
                if board[i][y] in setdown:
                    ansdown=False
                    break
                else:
                    setdown.add(board[i][y])
        return ansdown
    def checkup(self,board,x,y):
        ansup=True
        setup={'a'}
        for i in range(x,-1,-1):
            if board[i][y]=='.':
                continue
            else:
                if board[i][y] in setup:
                    ansup=False
                    break
                else:
                    setup.add(board[i][y])
        return ansup
    def checkright(self,board,x,y):
        ansright=True
        setright={'a'}
        for i in range(y,9,1):
            if board[x][i]=='.':
                continue
            else:
                if board[x][i] in setright:
                    ansright=False
                    break
                else:
                    setright.add(board[x][i])
        return ansright
    
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        test1=True
        for i in range(0,9):
            for j in range(0,9):
                caseleft=self.checkleft(board,i,j)
                caseright=self.checkright(board,i,j)
                caseup=self.checkup(board,i,j)
                casedown=self.checkdown(board,i,j)
                if caseleft==True and caseright==True and caseup==True and casedown==True:
                    continue
                else:
                    test1=False
                    break
        if test1==False:
            return False
        else:
            outpans=True
            for i in range(0,9,3):
                for j in range(0,9,3):
                    settemp={'a'}
                    temp=True
                    for k in range(i,i+3):
                        for l in range(j,j+3):
                            if board[k][l]=='.':
                                continue
                            else:
                                if board[k][l] in settemp:
                                    temp=False
                                    break
                                else:
                                    settemp.add(board[k][l])
                    if temp==False:
                        outpans=False
                        break
            return outpans
                            
        
            
