class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>>vect;
        vector<pair<double,int>>pq;
        for(int i=0;i<points.size();i++)
        {
            int xcod=points[i][0];
            int ycod=points[i][1];
            double dist=sqrt(pow(xcod,2)+pow(ycod,2));
            pq.push_back(make_pair(dist,i));
        }
        sort(pq.begin(),pq.end());
        vector<int>temp;
        int index=0;
        while(k>0)
        {
            double distval=pq[index].first;
            int indval=pq[index].second;
            int xval=points[indval][0];
            int yval=points[indval][1];
            temp.push_back(xval);
            temp.push_back(yval);
            vect.push_back(temp);
            temp.clear();
            index++;
            k--;
        }
        return vect;
    }
};
