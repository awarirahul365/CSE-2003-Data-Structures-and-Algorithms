#include<iostream>
using namespace std;
int main()
{
    int arr1[1000];
    int arr2[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        arr1[i]=i+1;
    }
    for(int j=0;j<n;j++)
    {
        cin>>arr2[j];
    }
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<arr1[i];
        }
    }

}
