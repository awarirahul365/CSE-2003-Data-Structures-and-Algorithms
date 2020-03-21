#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int r,c;
    int mat[100][100];
    int con=0;
    int don=0;
    int arr[1000];
    int res[1000];
    for(int i=0;i<t;i++)
    {
        cin>>r;
        cin>>c;
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                cin>>mat[j][k];
            }
        }
        int temp=r;
        int p=0;
        int check=0;
        int verify=0;
        while(p<temp)
        {
            for(int i=0;i<c;i++)
            {
                arr[i]=mat[p][i];
            }
            //increasing
            for(int j=0;j<c;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    break;
                }
                else if(arr[j+1]>arr[j])
                {
                    check=check+1;
                }
            }
            //decreasing
            for(int k=0;k<c;k++)
            {
                if(arr[k+1]>arr[k])
                {
                    break;
                }
                else if(arr[k]>arr[k+1])
                {
                    verify=verify+1;
                }
            }
            if(check==c-1)
            {
                con=con+1;
            }
            if(verify==c-1)
            {
                don=don+1;
            }
            p++;
            check=0;
            verify=0;
            for(int i=0;i<c;i++)
            {
                arr[i]=0;
            }
        }
        res[i]=con+don;
        con=0;
        don=0;
    }
    for(int i=0;i<t;i++)
    {
        cout<<res[i];
        cout<<"\n";
    }


}
