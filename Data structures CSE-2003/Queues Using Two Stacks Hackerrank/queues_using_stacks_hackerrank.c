#include<stdio.h>
#define MAX 100000
int que[MAX];
int front=-1;
int rear=-1;
int arr[100000];
int k=0;
int isfull()
{
    if(rear==MAX-1)
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
    if(front==-1 || front>rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int x)
{
    if(!isfull())
    {
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        que[rear]=x;
    }
    else
    {
        printf("The queue is full");
    }
}
void dequeue()
{
    if(!isempty())
    {
        front=front+1;
    }
    else
    {
        printf("The queue is empty");
    }
}
void disp()
{
    arr[k]=que[front];
    k++;
}
int main()
{
    int i;
    int n;
    int j;
    int choice;
    int p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&choice);
        if(choice==1)
        {
            int u;
            scanf("%d",&u);
            enqueue(u);
        }
        else if(choice==2)
        {
            dequeue();
        }
        else if(choice==3)
        {
            disp();
        }

    }
    for(p=0;p<k;p++)
    {
        printf("%d \n",arr[p]);
    }
}
