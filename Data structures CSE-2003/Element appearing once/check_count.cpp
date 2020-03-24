#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int t;
    int n;
    vector<int>vect;
    vector<int>rdup;
    vector<int>emp;
    vector<int>res;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int p;
            cin>>p;
            vect.push_back(p);
        }
        for(int y=0;y<n;y++)
        {
            rdup.push_back(vect[y]);
        }
        //remove duplicates
        for(int k=0;k<n;k++)
        {
            for(int l=k+1;l<n;l++)
            {
                if(vect[k]==vect[l])
                {
                    for(int m=l+1;m<n;m++)
                    {
                        vect[m-1]=vect[m];
                    }
                    l--;
                    n--;
                }
            }
        }
        int con=0;
        for(int d=0;d<n;d++)
        {
            int g=vect[d];
            for(int e=0;e<rdup.size();e++)
            {
                if(rdup[e]==g)
                {
                    con=con+1;
                }
            }
            emp.push_back(con);
            con=0;
        }
        int ind;
        for(int f=0;f<emp.size();f++)
        {
            if(emp[f]==1)
            {
                ind=f;
            }
        }
        res.push_back(vect[ind]);
        vect.clear();
        rdup.clear();
        emp.clear();
        con=0;
    }
    for(int r=0;r<res.size();r++)
    {
        cout<<res[r]<<endl;
    }
}
