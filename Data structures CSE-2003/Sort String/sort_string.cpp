#include<iostream>
#include<vector>
#include<string>
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
    string str;
    cin>>t;
    int n;
    int arr[100000];
    string res="";
    vector<string>emp;
    for(int i=0;i<t;i++)
    {
        cin>>str;
        for(int j=0;j<str.length();j++)
        {
            arr[j]=int(str[j]);
        }
        quicksort(arr,0,str.length()-1);
        for(int h=0;h<str.length();h++)
        {
            res=res+char(arr[h]);
        }
        emp.push_back(res);
        res="";
        for(int y=0;y<str.length();y++)
        {
            arr[y]=0;
        }
    }
    for(int i=0;i<emp.size();i++)
    {
        cout<<emp[i]<<endl;
    }

}
