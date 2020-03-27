#include<iostream>
#include<string>
#include<vector>
using namespace std;
int fun(int mat[],int p)
{
    int con=0;
    int num;
    for(int i=0;i<p;i++)
    {
        int cur_con=1;
        for(int j=i+1;j<p;j++)
        {
            if(mat[i]!=mat[j])
            {
                break;
            }
            else if(mat[i]==mat[j])
            {
                cur_con++;
            }
        }
        if(cur_con>con)
        {
            con=cur_con;
            num=mat[i];
        }
    }
    int arr1[1000000];
    int res;
    for(int i=0;i<p;i++)
    {
        arr1[i]=i+1;
    }
    for(int i=0;i<p;i++)
    {
        int j;
        for(j=0;j<p;j++)
        {
            if(arr1[i]==mat[j])
            {
                break;
            }
        }
        if(j==p)
        {
            res=arr1[i];
        };
    }
    mat[0]=num;
    mat[1]=res;
    con=0;
    num=0;
    for(int i=0;i<p;i++)
    {
        arr1[i]=0;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    int g;
    int emp;
    int arr[1000000];
    vector<int>vect;
    vector<vector<int> >empt;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        fun(arr,n);
        for(int c=0;c<2;c++)
        {
            vect.push_back(arr[c]);
        }
        empt.push_back(vect);
        vect.clear();
    }
    for(int i=0;i<empt.size();i++)
    {
        for(int j=0;j<empt[i].size();j++)
        {
            cout<<empt[i][j]<<" ";
        }
        cout<<"\n";
    }

}
