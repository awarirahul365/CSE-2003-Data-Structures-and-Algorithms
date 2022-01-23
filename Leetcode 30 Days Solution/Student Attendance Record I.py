class Solution:
    def checkRecord(self, s: str) -> bool:
        
        case1=True
        case2=True
        countabsent=0
        for i in range(0,len(s)):
            if s[i]=='A':
                countabsent=countabsent+1
        if countabsent>=2:
            case1=False
        for i in range(0,len(s)-3+1):
            substr=s[i:i+3]
            if substr=="LLL":
                case2=False
                break
        if case1==True and case2==True:
            return True
        else:
            return False
                
