class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int start=0;
        int end=s.length()-1;
        while(start<end)
        {
            char ch1=s[start];
            char ch2=s[end];
            char tp1=tolower(ch1);
            char tp2=tolower(ch2);
            int ptr1=(int)tp1;
            int ptr2=(int)tp2;
            if((ptr1>=97 && ptr1<=122) && (ptr2>=97 && ptr2<=122))
            {
                char temp=ch1;
                s[start]=s[end];
                s[end]=ch1;
                start++;
                end--;
            }
            else if((ptr1>=97 && ptr1<=122) && (ptr2<97 || ptr2>122))
            {
                end--;
            }
            else if((ptr1<97 || ptr1>122) && (ptr2>=97 && ptr2<=122))
            {
                start++;
            }
            else
            {
                start++;
                end--;
            }
        }
        return s;
    }
};
