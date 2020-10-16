class Solution {
public:
    void func(vector<int>& vect)
    {
        int p=vect.size()-1;
        int last=vect[p];
        for(int i=p;i>0;i--)
        {
            vect[i]=vect[i-1];
        }
        vect[0]=last;
    }
    void rotate(vector<int>& nums, int k) {
        
        for(int i=0;i<k;i++)
        {
            func(nums);
        }
        
    }
};
