#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    int arr[1000];
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            arr[k]=mat[i][j];
            k++;
        }
    }
    
    int temp;
    for(int i=0;i<k-1;i++)
    {
        for (int j=0;j<k-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //display
    int m=0;
    int res[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i][j]=arr[m];
            m++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }


}
