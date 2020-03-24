#include<iostream>
#include<cmath>
using namespace std;
int bin(int p)
{
    int temp[1000];
    int temp_rev[1000];
    int res[1000];
    int r=0;
    while(p>0)
    {
        temp[r]=p%2;
        p=p/2;
        r++;
    }
    for(int i=0;i<r;i++)
    {
        temp_rev[i]=temp[r-i-1];
    }
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            res[i]=0;
        }
        else if(i%2!=0)
        {
            res[i]=temp_rev[i];
        }
    }
    int num=0;
    for(int i=0;i<r;i++)
    {
        int f=res[r-i-1];
        int exp=pow(2,i);
        num=num+exp*f;
    }
    return num;
    num=0;
    for(int i=0;i<r;i++)
    {
        temp[i]=0;
        temp_rev[i]=0;
        res[i]=0;
    }
    r=0;

}
int main()
{
    int t;
    int n;
    int out[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        out[i]=bin(n);
    }
    for(int j=0;j<t;j++)
    {
        cout<<out[j]<<endl;
    }
}
