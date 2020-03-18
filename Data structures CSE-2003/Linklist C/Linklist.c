#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main()
{
    struct node *temp,*p,*head;
    int n;
    int i;
    int ele;
    printf("Enter the element");
    scanf("%d",&n);
    printf("Enter first element");
    scanf("%d",&ele);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;
    p=temp;
    head=temp;
    for(i=2;i<n;i++)
    {
        int inp;
        printf("Enter the elements rest");
        scanf("%d",&inp);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=inp;
        temp->next=NULL;
        p->next=temp;
        p=p->next;

    }

}
void transvers(struct node *head)
{
    struct node *check;
    for(check=head;check->next!=NULL;check=check->next)
    {
        printf("%d",check->data);
    }
}

