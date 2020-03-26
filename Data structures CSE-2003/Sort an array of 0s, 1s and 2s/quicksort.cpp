#include<iostream>
#include<vector>
using namespace std;
int partit(int num[],int a,int b)
{
    int pivot;
    int start;
    int en;
    pivot=num[a];
    start=a;
    en=b;
    while(start<en)
    {
        while(num[start]<=pivot)
        {
            start++;
        }
        while(num[en]>pivot)
        {
            en--;
        }
        if(start<en)
        {
            int temp;
            temp=num[start];
            num[start]=num[en];
            num[en]=temp;
        }
    }
    int temp2;
    temp2=num[a];
    num[a]=num[en];
    num[en]=temp2;
    return en;
}
int quicksort(int mat[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partit(mat,lb,ub);
        quicksort(mat,lb,loc-1);
        quicksort(mat,loc+1,ub);
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    int arr[10000];
    vector<int>vect;
    vector<vector<int> >imp;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        quicksort(arr,0,n-1);
        for(int p=0;p<n;p++)
        {
            vect.push_back(arr[p]);
        }
        imp.push_back(vect);
        vect.clear();
        for(int h=0;h<n;h++)
        {
            arr[h]=0;
        }
    }
    for(int i=0;i<imp.size();i++)
    {
        for(int j=0;j<imp[i].size();j++)
        {
            cout<<imp[i][j]<<" ";
        }
        cout<<"\n";
    }

}
