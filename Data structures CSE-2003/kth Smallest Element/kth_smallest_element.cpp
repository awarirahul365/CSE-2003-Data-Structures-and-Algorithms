#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int sorfun(int mat[],int r,int x)
{
    vector<int>store;
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<r;j++)
        {
            if(mat[i]==mat[j])
            {
                for(int k=j+1;k<r;k++)
                {
                    mat[k-1]=mat[k];
                }
                j--;
                r--;
            }
        }
    }
    for(int g=0;g<r;g++)
    {
        store.push_back(mat[g]);
    }
    sort(store.begin(),store.end());
    int y=store[x];
    return y;

}
int main()
{
    int t;
    int n;
    int arr[100000];
    int check;
    int add[100000];
    int res;
    int f[100000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int p;
            cin>>p;
            arr[j]=p;
        }
        cin>>check;
        int temp=check-1;
        res=sorfun(arr,n,temp);
        f[i]=res;
    }
    for(int h=0;h<t;h++)
    {
        cout<<f[h];
        cout<<"\n";
    }
}
