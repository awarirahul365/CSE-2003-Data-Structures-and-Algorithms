class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        //for hour hand
        int t1=minutes/5;
        int mod=minutes%5;
        int minangle=t1*30+mod*6;
        double minuteangle=(double)minangle;
        double hourangle=(double)minutes/(double)2;
        int z=hour%12;
        int y=z*30;
        double k=double(y);
        hourangle=hourangle+k;
        double ans=abs(minuteangle-hourangle);
        double ans2=(double)360-ans;
        double res=min(ans,ans2);
        return res;
        
    }
};
