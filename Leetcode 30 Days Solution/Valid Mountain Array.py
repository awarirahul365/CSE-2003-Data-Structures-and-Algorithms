class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        
        listlen=len(arr)
        if listlen<3:
            return False
        else:
            leftptr=0
            rightptr=listlen-1
            rightstopindex=-1
            leftstopindex=listlen
            for i in range(rightptr,0,-1):
                if arr[rightptr]<arr[rightptr-1]:
                    rightptr=rightptr-1
                else:
                    rightstopindex=rightptr
                    break
            for i in range(0,listlen-1,1):
                if arr[leftptr+1]>arr[leftptr]:
                    leftptr=leftptr+1
                else:
                    leftstopindex=leftptr
                    break
            if rightstopindex==leftstopindex:
                return True
            else:
                return False
