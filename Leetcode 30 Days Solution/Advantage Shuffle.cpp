class Solution {
public:
    int checkadvantage(vector<int>& arr1,vector<int>& arr2)
    {
        int count=0;
        for(int i=0;i<arr2.size();i++)
        {
            int Aelement=arr1[i];
            int Belement=arr2[i];
            if(Belement<Aelement)
            {
                count++;
            }
        }
        return count;
    }
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        
        vector<vector<int> > vect;
        sort(A.begin(),A.end());
        do{
            vect.push_back(A);
        }while(next_permutation(A.begin(),A.end()));
        int res=-1;
        int maxcount=-1;
        for(int i=0;i<vect.size();i++)
        {
            int outp;
            outp=checkadvantage(vect[i],B);
            if(outp>maxcount)
            {
                maxcount=outp;
                res=i;
            }
        }
        return vect[res];
        
        
    }
};
