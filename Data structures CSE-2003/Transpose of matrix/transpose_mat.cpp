#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cout<<"Enter test cases ";
    cin>>t;
    int n;
    int mat[100][100];
    int res[100][100];
    vector<int>vect;
    vector<vector<int> >imp;
    for(int i=0;i<t;i++)
    {
        cout<<"Enter size ";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>mat[j][k];
            }
        }
        for(int d=0;d<n;d++)
        {
            for(int e=0;e<n;e++)
            {
                res[d][e]=mat[e][d];
            }
        }
        for(int g=0;g<n;g++)
        {
            for(int h=0;h<n;h++)
            {
                vect.push_back(res[g][h]);
            }
        }
        imp.push_back(vect);
        vect.clear();
    }
    for(int i=0;i<imp.size();i++)
    {
        for(int j=0;j<imp[i].size();j++)
        {
            cout<<imp[i][j]<<" ";
        }
        cout<<"\n";
    }
}


