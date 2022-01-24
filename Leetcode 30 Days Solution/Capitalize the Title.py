class Solution:
    def capitalizeTitle(self, title: str) -> str:
        
        strres=""
        liststr=title.split(' ')
        for i in range(0,len(liststr)):
            word=liststr[i]
            lenword=len(word)
            if lenword<=2:
                strtemp=word.lower()
                strres=strres+strtemp+" "
            else:
                temp=word[0:1]
                temp=temp.upper()
                temp2=word[1:lenword]
                temp2=temp2.lower()
                strres=strres+temp+temp2+" "
        return strres[0:len(strres)-1]
    
        
        
