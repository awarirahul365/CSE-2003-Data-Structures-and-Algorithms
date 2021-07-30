class MapSum {
public:
    /** Initialize your data structure here. */
    unordered_map<string,int>mp;
    MapSum() {
        
        
    }
    
    void insert(string key, int val) {
        
        mp[key]=val;
    }
    
    int sum(string prefix) {
        
        int sum=0;
        unordered_map<string,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            string str=itr->first;
            string s=str.substr(0,prefix.length());
            if(s==prefix)
            {
                sum=sum+itr->second;
            }
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
