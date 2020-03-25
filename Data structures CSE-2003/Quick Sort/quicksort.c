#include<stdio.h>
int partition(int num[],int a,int b)
{
    int pivot;
    int start;
    int end;
    pivot=num[a];
    start=a;
    end=b;
    while(start<end)
    {
        while(num[start]<=pivot)
        {
            start++;
        }
        while(num[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp;
            temp=num[start];
            num[start]=num[end];
            num[end]=temp;
        }
    }
    int temp2;
    temp2=num[a];
    num[a]=num[end];
    num[end]=temp2;
    return end;
}
void quicksort(int mat[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(mat,lb,ub);
        quicksort(mat,lb,loc-1);
        quicksort(mat,loc+1,ub);
    }
}
int main()
{
    int arr[100];
    int j;
    int n;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    quicksort(arr,0,n-1);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
