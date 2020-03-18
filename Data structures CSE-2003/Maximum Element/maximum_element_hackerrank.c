#include<stdio.h>
#define SIZE 1000000
int sp=-1;
int arr[SIZE];
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
void push(int x)
{
    if(!isfull())
    {
        sp=sp+1;
        arr[sp]=x;
    }

}
void pop()
{
    if(!isempty())
    {
        int data;
        data=arr[sp];
        sp=sp-1;
    }
}
int maxele()
{
    int m;
    int j;
    j=sp;
    int comp;
    m=arr[sp];
    for(j=sp;j>=0;j--)
    {
        comp=arr[j];
        if(comp>m)
        {
            m=comp;
        }
    }
    return m;

}
int main()
{
    int i;
    int k;
    int n,d,b;
    int choice;
    int u=0;
    int y;
    int store[10];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&choice);
        if(choice==1)
        {

            scanf("%d",&k);
            push(k);

        }
        else if(choice==2)
        {
            pop();

        }
        else if(choice==3)
        {
            y=maxele();
            store[u]=y;
            u++;
        }
    }
    for(b=0;b<u;b++)
    {
        printf("%d \n",store[b]);
    }





}
