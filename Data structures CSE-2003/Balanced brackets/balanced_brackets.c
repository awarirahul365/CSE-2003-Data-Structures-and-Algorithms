#include<stdio.h>
#include <stdlib.h>
#define SIZE 100000
char input[SIZE];
int sp=-1;
int isfull()
{
    if(sp==SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if(sp==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char x)
{
    if(!isfull())
    {
        sp=sp+1;
        input[sp]=x;
    }
    else
    {
        printf("no element can be pushed");
    }
}
void pop()
{
    if(!isempty())
    {
        char ap;
        ap=input[sp];
        sp=sp-1;
    }
}
int main()
{
    int i,k,l;
    char ch;
    int flag;
    char arr[100];
    scanf("%d",&k);
    for(l=0;l<k;l++)
    {
        scanf("%s",arr);
        for(i=0;arr[i]!='\0';i++)
    {
        ch=arr[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            push(ch);
        }
        else
        {
            pop();
        }
        if(!flag)
        {
            printf("NO");
            exit(0);
        }
    }
    if(sp>-1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    }




}
