class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        char ans;
        int targetascii=(int)target;
        int diff=targetascii-96;
        unordered_set<char>s;
        for(int i=0;i<letters.size();i++)
        {
            s.insert(letters[i]);
        }
        int ptr=diff+1;
        while(true)
        {
            int val=ptr%26;
            if(val==0)
            {
                val=122;
            }
            else
            {
                val=val+96;
            }
            char ch=char(val);
            if(s.find(ch)!=s.end() && ch!=target)
            {
                ans=ch;
                break;
            }
            else
            {
                ptr++;
            }
        }
        return ans;
    }
};
