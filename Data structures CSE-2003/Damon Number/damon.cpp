#include<iostream>
using namespace std;
int finddamon(int n)
{
    if(n>2)
    {
        int prv=n-1;
        int nxt=n+1;
        int num1=(prv/2)+1;
        int num2=(nxt/2)+1;
        int flag1=1;
        int flag2=1;
        for(int i=2;i<num1;i++)
        {
            if(prv%i==0)
            {
                flag1=0;
                break;
            }
        }
        for(int i=2;i<num2;i++)
        {
            if(nxt%i==0)
            {
                flag2=0;
                break;
            }
        }
        if(flag1==1 && flag2==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(n<=2)
    {
        return 0;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    int res[10000];
    for(int i=0;i<t;i++)
    {
        cin>>n;
        res[i]=finddamon(n);
    }
    for(int i=0;i<t;i++)
    {
        if(res[i]==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}
