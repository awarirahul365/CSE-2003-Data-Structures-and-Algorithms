class Solution {
public:
    typedef pair<int,char>p;
    string reorganizeString(string s) {
        
        unordered_map<char,int>mp;
        string str="";
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        priority_queue<p>pq;
        unordered_map<char,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            pq.push({itr->second,itr->first});
        }
        while(pq.size()>=2)
        {
            int count1=pq.top().first;
            char ch1=pq.top().second;
            count1--;
            str=str+ch1;
            pq.pop();
            int count2=pq.top().first;
            char ch2=pq.top().second;
            count2--;
            str=str+ch2;
            pq.pop();
            if(count1>0)
            {
                pq.push({count1,ch1});
            }
            if(count2>0)
            {
                pq.push({count2,ch2});
            }
        }
        if(pq.size()!=0)
        {
            int c=pq.top().first;
            if(c>1)
            {
                return temp;
            }
            else
            {
                str=str+pq.top().second;
                pq.pop();
            }
        }
        return str;
    }
};
