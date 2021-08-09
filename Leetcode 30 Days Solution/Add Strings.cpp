class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string str="";
        int ptr1=num1.length()-1;
        int ptr2=num2.length()-1;
        int carry=0;
        while(ptr1>=0 && ptr2>=0)
        {
            int val1=(int)num1[ptr1]-48;
            int val2=(int)num2[ptr2]-48;
            int sum=val1+val2+carry;
            int ad=sum%10;
            str=str+to_string(ad);
            carry=sum/10;
            ptr1--;
            ptr2--;
        }
        if(ptr1>=0)
        {
            while(ptr1>=0)
            {
                int v1=(int)num1[ptr1]-48;
                int s1=carry+v1;
                int a1=s1%10;
                str=str+to_string(a1);
                carry=s1/10;
                ptr1--;
            }
        }
        if(ptr2>=0)
        {
            while(ptr2>=0)
            {
                int v2=(int)num2[ptr2]-48;
                int s2=carry+v2;
                int a2=s2%10;
                str=str+to_string(a2);
                carry=s2/10;
                ptr2--;
            }
        }
        if(carry!=0)
        {
            str=str+to_string(carry);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
