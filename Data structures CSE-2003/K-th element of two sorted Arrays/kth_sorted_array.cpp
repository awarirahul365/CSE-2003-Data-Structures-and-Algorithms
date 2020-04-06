#include<iostream>
using namespace std;
int func(int mat1[],int mat2[],int p,int q,int pos)
{
    int mer[100000];
    int total=p+q;
    for(int g=0;g<p;g++)
    {
        mer[g]=mat1[g];
    }
    for(int h=0;h<q;h++)
    {
        mer[p+h]=mat2[h];
    }
    //sorting
    int temp;
    for(int i=0;i<total-1;i++)
    {
        for(int j=0;j<total-i-1;j++)
        {
            if(mer[j]>mer[j+1])
            {
                temp=mer[j];
                mer[j]=mer[j+1];
                mer[j+1]=temp;
            }
        }
    }
    return mer[pos-1];
    for(int r=0;r<total;r++)
    {
        mer[r]=0;
    }
}
int main()
{
    int t;
    cin>>t;
    int arr1[100000];
    int arr2[100000];
    int m;
    int n;
    int k;
    int res[100000];
    for(int i=0;i<t;i++)
    {
        cin>>m;
        cin>>n;
        cin>>k;
        for(int d=0;d<m;d++)
        {
            cin>>arr1[d];
        }
        for(int j=0;j<n;j++)
        {
            cin>>arr2[j];
        }
        res[i]=func(arr1,arr2,m,n,k);
        for(int y=0;y<m;y++)
        {
            arr1[y]=0;
        }
        for(int z=0;z<n;z++)
        {
            arr2[z]=0;
        }
        m=0;
        n=0;
        k=0;
    }
    for(int f=0;f<t;f++)
    {
        cout<<res[f]<<endl;
    }
}
