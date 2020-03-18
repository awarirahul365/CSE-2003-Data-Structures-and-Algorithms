#include<stdio.h>
int main()
{
    int arr[1000];
    int n;
    int i;
    int sum_left=0;
    int sum_right=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    int q;
    int p;
    int list=0;
    int finarr[1000];
    for(k=1;k<n;k++)
    {

        for(p=0;p<k;p++)
        {
            sum_left=sum_left+arr[p];
        }

        for(q=k+1;q<n;q++)
        {
            sum_right=sum_right+arr[q];
        }
        if(sum_left==sum_right)
        {
            finarr[list]=arr[k];
            list=list+1;
        }
        else if(sum_left!=sum_right)
        {
            sum_left=0;
            sum_right=0;
        }
    }
    int r;
    for(r=0;r<list;r++)
    {
        printf("%d",finarr[r]);
    }



}
