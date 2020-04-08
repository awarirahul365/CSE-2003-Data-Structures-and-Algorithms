#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
    int low;
    int high;
    low=0;
    high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key>arr[mid])
        {
            low=mid+1;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else if(key==arr[mid])
        {
            return mid;
        }
    }
}
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    int key;
    cin>>key;
    int ans;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=binary(arr,n,key);
    cout<<ans;
}
