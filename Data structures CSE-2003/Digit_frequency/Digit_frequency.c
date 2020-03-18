#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i;
    int count=0;
    char num[1000];
    for(i=0;i<=9;i++)
    {
        num[i]=0;
    }
    int j;
    int n;
    int u;
    for(j=0;j<strlen(str);j++)
    {
        char p;
        p=str[j];
        if(isdigit(p)!=0)
        {
            n=(int)p-48;
            num[n]=num[n]+1;
        }
    }
    int y;
    for(y=0;y<=9;y++)
    {
        printf("%d ",num[y]);
    }



}
