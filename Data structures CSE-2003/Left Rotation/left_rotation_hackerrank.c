#include<stdio.h>
int main()
{
    int arr[100000];
    int temp[100000];
    int pre[100000];
    int merge[100000];
    int n;
    int i;
    int d;
    int j,k,p,q,m,b,a,l,y;
    int sum=0;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<d;j++)
    {
        temp[j]=arr[j];
    }
    for(p=0;p<(n-d);p++)
    {
        pre[p]=arr[p+d];
    }
    for(b=0;b<(n-d);b++)
    {
        merge[b]=pre[b];
    }
    a=b;
    for(l=0;l<d;l++)
    {
        merge[a]=temp[l];
        a++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",merge[i]);
    }










}
