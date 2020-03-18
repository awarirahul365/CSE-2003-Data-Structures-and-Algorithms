#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int j;
    int i;
    int y;
    int bin;
    int sum=0;
    char str[20];
    int inp[1000];
    int temp[1000];
    int res[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&inp[i]);
    }
    for(j=0;j<n;j++)
    {
        int num;
        int rem;
        int k=0;
        num=inp[j];
        while(num>0)
        {
            rem=num%2;
            temp[k]=rem;
            k++;
            num=num/2;
        }
        for(y=0;y<k;y++)
        {
            int u;
            if(y>0 && y%2==0)
            {
                u=pow(10,y)+1;
            }
            else if(y%2!=0 || y==0)
            {
                u=pow(10,y);
            }
            sum=sum+temp[y]*u;

        }
        res[j]=sum;
        sum=0;

    }
    int p;
    for(p=0;res[p]!='\0';p++)
    {
        printf("%d \n",res[p]);
    }






}
