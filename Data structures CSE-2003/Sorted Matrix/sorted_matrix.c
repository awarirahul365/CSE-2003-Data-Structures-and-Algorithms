#include<stdio.h>
void fun(int arr[],int h)
{
    int f,g;
    int tex;
    int t;
    t=h*h;
    for(f=0;f<t-1;f++)
    {
        for(g=0;g<t-f-1;g++)
        {
            if(arr[g]>arr[g+1])
            {
                tex=arr[g];
                arr[g]=arr[g+1];
                arr[g+1]=tex;
            }
        }
    }
    int d;
    for(d=0;d<t;d++)
    {
        printf("%d ",arr[d]);
    }
}
int main()
{
    int testcase;
    int matrix[100][100];
    int temp[100];
    int ne[100];
    int i,j,k;
    int n;
    printf("Enter the number of test \n");
    scanf("%d",&testcase);
    int p=0;
    int q;
    int s;
    for(i=0;i<testcase;i++)
    {
        printf(" Enter size of matrix \n");
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                scanf("%d",&matrix[j][k]);
                temp[p]=matrix[j][k];
                p++;
            }
        }
        fun(temp,n);
        s=n*n;
        for(q=0;q<s;q++)
        {
            temp[q]=0;
        }
        p=0;

    }


}
