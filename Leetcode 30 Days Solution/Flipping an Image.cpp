class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        //reverse the rows
        int temp;
        for(int i=0;i<A.size();i++)
        {
            int start=0;
            int end=A[i].size()-1;
            while(start<end)
            {
                temp=A[i][start];
                A[i][start]=A[i][end];
                A[i][end]=temp;
                start++;
                end--;
            }
        }
        //change 0's and 1's
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                if(A[i][j]==0)
                {
                    A[i][j]=1;
                }
                else if(A[i][j]==1)
                {
                    A[i][j]=0;
                }
            }
        }
        return A;
    }
};
