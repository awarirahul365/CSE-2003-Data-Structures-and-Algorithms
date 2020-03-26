#include<iostream>
#include<vector>
using namespace std;
int binary(int mat[],int p,int r,int check)
{
    int temp2;
    int emp[1000];
    for(int i=0;i<p;i++)
    {
        for(int j=i+1;j<p;j++)
        {
            if(mat[i]>mat[j])
            {
                temp2=mat[i];
                mat[i]=mat[j];
                mat[j]=temp2;
            }
        }
    }
    //delete element
    for(int i=0;i<p;i++)
    {
        if(mat[i]==r)
        {
            for(int j=i;j<p-1;j++)
            {
                mat[j]=mat[j+1];
            }
        }
    }//inserting element
    for(int i=p;i>check;i--)
    {
        mat[i]=mat[i-1];
    }
    mat[check]=r;
}
int main()
{
    int t;
    int n;
    int arr[1000];
    int k;
    int temp;
    cin>>t;
    vector<int>vect;
    vector<vector<int> >imp;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cin>>k;
        temp=arr[k];
        binary(arr,n,temp,k);
        for(int d=0;d<n;d++)
        {
            vect.push_back(arr[d]);
        }
        imp.push_back(vect);
        vect.clear();
        for(int f=0;f<n;f++)
        {
            arr[f]=0;
        }
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
