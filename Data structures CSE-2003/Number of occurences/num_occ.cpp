#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int fun(int mat[],int m,int p)
{
    int con=0;
    for(int i=0;i<m;i++)
    {
        int cur_con=1;
        for(int j=i+1;j<m;j++)
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
        if(cur_con>con && mat[i]==p)
        {
            con=cur_con;
        }
    }
    return con;
    con=0;
}
int main()
{
    int t;
    int n;
    int k;
    int f;
    int arr[1000];
    int out[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>k;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        out[i]=fun(arr,n,k);
    }
    for(int i=0;i<t;i++)
    {
        if(out[i]==0)
        {
            out[i]=-1;
        }
    }
    for(int j=0;j<t;j++)
    {
        cout<<out[j]<<endl;
    }

}
