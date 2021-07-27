class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        
        vector<int>vect;
        if(barcodes.size()==1)
        {
            vect.push_back(barcodes[0]);
        }
        else
        {
            
        unordered_map<int,int>mp;
        for(int i=0;i<barcodes.size();i++)
        {
            mp[barcodes[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            pq.push({itr->second,itr->first});
        }
        while(pq.size()>=2)
        {
            int count1=pq.top().first;
            int num1=pq.top().second;
            vect.push_back(num1);
            count1--;
            pq.pop();
            int count2=pq.top().first;
            int num2=pq.top().second;
            vect.push_back(num2);
            count2--;
            pq.pop();
            if(count1>0)
            {
                pq.push({count1,num1});
            }
            if(count2>0)
            {
                pq.push({count2,num2});
            }
        }
        if(pq.size()!=0)
        {
            int count=pq.top().first;
            for(int i=0;i<count;i++)
            {
                vect.push_back(pq.top().second);
            }
        }
        }
        return vect;
    }
};
