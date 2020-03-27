#include<iostream>
#include<vector>
#include<string>
using namespace std;
int bin(int n)
{
    int temp[100000];
    int g=0;
    int temp_rev[100000];
    while(n>0)
    {
        temp[g]=n%2;
        n=n/2;
        g++;
    }
    for(int i=0;i<g;i++)
    {
        temp_rev[i]=temp[g-i-1];
    }
    int con=0;
    for(int i=0;i<g;i++)
    {
        int cur_con=1;
        for(int j=i+1;j<g;j++)
        {
            if(temp_rev[i]!=temp_rev[j])
            {
                break;
            }
            else if(temp_rev[i]==temp_rev[j])
            {
                cur_con++;
            }
        }
        if(cur_con>con && temp_rev[i]==1)
        {
            con=cur_con;
        }
    }
    return con;
    con=0;
    for(int i=0;i<g;i++)
    {
        temp[i]=0;
        temp_rev[i]=0;
    }
    g=0;
}
int main()
{
    int num;
    int t;
    int p;
    int out[100000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>num;
        out[i]=bin(num);
    }
    for(int i=0;i<t;i++)
    {
        cout<<out[i]<<endl;
    }
}
