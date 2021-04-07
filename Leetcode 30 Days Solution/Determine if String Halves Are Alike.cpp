class Solution {
public:
    bool halvesAreAlike(string str) {
        
        unordered_set<char>s;
        s.insert('a');
        s.insert('e');
        s.insert('i');
        s.insert('o');
        s.insert('u');
        s.insert('A');
        s.insert('E');
        s.insert('I');
        s.insert('O');
        s.insert('U');
        int len=str.length();
        int mid=len/2;
        string firstpart=str.substr(0,mid);
        string secondpart=str.substr(mid,mid);
        int countfirst=0;
        int countsecond=0;
        for(int i=0;i<firstpart.length();i++)
        {
            char ch=firstpart[i];
            if(s.find(ch)!=s.end())
            {
                countfirst++;
            }
        }
        for(int i=0;i<secondpart.length();i++)
        {
            char ch2=secondpart[i];
            if(s.find(ch2)!=s.end())
            {
                countsecond++;
            }
        }
        if(countfirst==countsecond)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
