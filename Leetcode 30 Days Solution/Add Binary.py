class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        
        if len(a)>len(b):
            d1=len(a)-len(b)
            t1=""
            for i in range(0,d1):
                t1=t1+"0"
            b=t1+b
        else:
            d2=len(b)-len(a)
            t2=""
            for i in range(0,d2):
                t2=t2+"0"
            a=t2+a
        strans=""
        ptr1=len(a)-1
        ptr2=len(b)-1
        carry=0
        while ptr1>=0 and ptr2>=0:
            num1=int(a[ptr1])
            num2=int(b[ptr2])
            sumnum=num1+num2+carry
            if sumnum==0:
                strans=strans+"0"
                carry=0
            elif sumnum==1:
                strans=strans+"1"
                carry=0
            elif sumnum==2:
                strans=strans+"0"
                carry=1
            else:
                strans=strans+"1"
                carry=1
            ptr1=ptr1-1
            ptr2=ptr2-1
        if carry!=0:
            strans=strans+str(carry)
        ans=strans[::-1]
        return ans
