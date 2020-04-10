#include<iostream>
#include<string>
using namespace std;
int dupli(int arr[],int n)
{
    int element=1;
    int check=n/2;
    int temp;
    int flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
                element=element+1;
            }
        }
        if(element>check)
        {
            temp=arr[i];
            flag=true;
            break;
        }
        else
        {
            element=1;
        }
    }
    if(flag==true)
    {
        return temp;
    }
    else if(flag==false)
    {
        return -1;
    }

}
int main()
{
    int t;
    cin>>t;
    int n;
    int res[100];
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        res[i]=dupli(arr,n);
    }
    for(int i=0;i<t;i++)
    {
        cout<<res[i]<<endl;
    }
}
