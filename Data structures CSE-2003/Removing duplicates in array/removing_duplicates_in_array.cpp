#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=7;
    int arr[7]={3,5,4,2,3,1,5};
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j+1;k<n;k++)
                {
                    arr[k-1]=arr[k];
                }
                j--;
                n--;
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}

