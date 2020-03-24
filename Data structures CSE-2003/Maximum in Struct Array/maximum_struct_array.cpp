#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct Height{
    int feet;
    int inches;
};
int findMax(Height arr[],int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp1,tmp2;
        cin>>n;
        struct Height arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>tmp1>>tmp2;
            arr[i]={tmp1,tmp2};
        }
        int res=findMax(arr,n);
        cout<<res<<endl;
    }
    return 0;
}
int findMax(Height arr[],int n)
{
    int temp[10000];
    int out[10000];
    int fin[10000];
    int g=0;
    for(int i=0;i<n;i++)
    {
        int check;
        check=arr[i].feet;
        temp[i]=check*12;
    }
    for(int i=0;i<n;i++)
    {
        out[i]=temp[i]+arr[i].inches;
    }
    int maximum;
    maximum=out[0];
    for(int i=0;i<n;i++)
    {
        if(out[i]>maximum)
        {
            maximum=out[i];
        }
    }
    return maximum;
}
