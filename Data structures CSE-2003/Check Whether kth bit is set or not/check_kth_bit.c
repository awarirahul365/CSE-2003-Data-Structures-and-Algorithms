#include<stdio.h>
int bin(int p,int a)
{
    int temp[10000];
    int j;
    int h=0;
    while(p>0)
    {
        temp[h]=p%2;
        p=p/2;
        h++;
    }
    int y;
    if(temp[a]==1)
    {
        return 1;
    }
    else if(temp[a]==0)
    {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int k;
    int i;
    int out;
    int fin[10000];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&k);
        out=bin(n,k);
        fin[i]=out;
    }
    int g;
    for(g=0;g<t;g++)
    {
        if(fin[g]==1)
        {
            printf("Yes");
            printf("\n");
        }
        else if(fin[g]==0)
        {
            printf("No");
            printf("\n");
        }
    }
}

