#include<stdio.h>
#define MAX 1000
int que[MAX];
int front=-1;
int rear=-1;
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
    if((front==-1 && rear==-1) || (front==rear))
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
        printf("Queue is full no element can be added");
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
        printf("queue is empty");
    }

}
void disp()
{
    int p;
    for(p=front;p<=rear;p++)
    {
        printf("%d",que[p]);
    }
}
int main()
{
    int n,m,u;
    int i;
    printf("ENTER NUMBER OF QUERIES");
    scanf("%d",&u);
    for(i=0;i<u;i++)
    {
        printf("ENTER YOUR CHOICE");
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter the number");
            scanf("%d",&m);
            enqueue(m);
        }
        else if(n==2)
        {
            dequeue();
        }
        else if(n==3)
        {
            disp();
        }
    }

}

