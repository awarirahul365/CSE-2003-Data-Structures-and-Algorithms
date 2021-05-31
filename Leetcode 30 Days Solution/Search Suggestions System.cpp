class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        vector<vector<string> > vect;
        sort(products.begin(),products.end());
        string currstr="";
        vector<string>temp;
        for(int i=0;i<searchWord.length();i++)
        {
            currstr=currstr+searchWord[i];
            int searchlen=currstr.length();
            for(int j=0;j<products.size();j++)
            {
                string prodname=products[j];
                int prodlen=prodname.length();
                if(searchlen<=prodlen)
                {
                    string prodsubstr=prodname.substr(0,searchlen);
                    if(prodsubstr==currstr)
                    {
                        temp.push_back(prodname);
                    }
                }
            }
            if(temp.size()>3)
            {
                while(temp.size()!=3)
                {
                    temp.pop_back();
                }
            }
            vect.push_back(temp);
            temp.clear();
        }
        return vect;
    }
};
