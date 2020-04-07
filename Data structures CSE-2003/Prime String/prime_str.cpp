#include<iostream>
#include<string>
using namespace std;
bool fun(string str,int sz)
{
    char temp;
    int sum=0;
    for(int i=0;i<str.length();i++)
    {
        temp=str[i];
        int p;
        p=(int)temp;
        sum=sum+p;
    }
    int nxt;
    nxt=sum/2;
    bool flag=true;
    for(int i=2;i<nxt;i++)
    {
        if(sum%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        return 1;
    }
    else if(flag==false)
    {
        return 0;
    }
    sum=0;
    nxt=0;
}
int main()
{
    int t;
    cout<<"Enter test cases ";
    cin>>t;
    int n;
    int sz;
    string str;
    int res[1000];
    for(int i=0;i<t;i++)
    {
        cout<<"Enter size ";
        cin>>sz;
        cout<<"Enter string ";
        cin>>str;
        res[i]=fun(str,sz);
    }
    for(int i=0;i<t;i++)
    {
        if(res[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else if(res[i]==0)
        {
            cout<<"NO"<<endl;
        }
    }
}
