class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int index=-1;
        int dist=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            int xcod=points[i][0];
            int ycod=points[i][1];
            if(xcod==x || ycod==y)
            {
                int mandist=abs(xcod-x)+abs(ycod-y);
                if(mandist<dist)
                {
                    dist=mandist;
                    index=i;
                }
            }
        }
        return index;
    }
};
