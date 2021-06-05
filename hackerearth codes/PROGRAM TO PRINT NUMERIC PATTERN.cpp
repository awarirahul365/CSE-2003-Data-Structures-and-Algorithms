#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matrix[n][n]={{0}};
    int i,j;
    int num=1;
    for(int start=0;start<n;start++)
    {
        for(int i=start,j=0;i<n;i++,j++)
        {
            matrix[i][j]=num;
            num++;
        }
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<=i;j++)
    	{
    		cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
