class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        int n=num_people;
        vector<int>vect(n,0);
        vector<int>temp;
        int counter=-1;
        int mod;
        int index=0;
        int discand=0;
        while((candies-discand)>0)
        {
            mod=index%n;
            if(mod==0)
            {
                counter=counter+1;
                discand=counter*n+mod+1;
                vect[mod]=discand+vect[mod];
                candies=candies-discand;
                index++;
            }
            else
            {
                discand=counter*n+mod+1;
                vect[mod]=discand+vect[mod];
                candies=candies-discand;
                index++;
            }
        }
        mod++;
        mod=mod%n;
        if(candies>0)
        {
            vect[mod]=vect[mod]+candies;
        }
        return vect;
    }
};
