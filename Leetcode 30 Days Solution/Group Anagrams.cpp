class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& string_list) {
        
        unordered_map<string,vector<string> > mp;
        vector<vector<string> >vect;
        for(int i=0;i<string_list.size();i++)
        {
            string curr=string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            mp[string_list[i]].push_back(curr);
        }
        unordered_map<string,vector<string>>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            vector<string>temp;
            string keystr=itr->first;
            for(int i=0;i<itr->second.size();i++)
            {
                temp.push_back(mp[keystr][i]);
            }
            vect.push_back(temp);
            temp.clear();
        }
        return vect;
        
        
    }
};
