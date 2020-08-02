/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
Node *insertAtEnd(Node *head,int newdata)
{
    //Insert LinkList
    Node *t=new Node(newdata);
    if(head==NULL)
    {
        return t;
    }
    else
    {
        Node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=t;
        return head;
    }
}
void rearrange(struct Node *odd)
{
    Node *front=odd;
    Node *extra=NULL;
    Node *start=odd;
    Node *back=NULL;
    Node *temp=NULL;
    int level=1;
    //Take Alternate Nodes
    while(front!=NULL)
    {
        if(level%2!=0)
        {
            back=front;
            front=front->next;
            level++;
        }
        else if(level%2==0)
        {
            temp=front;
            front=front->next;
            back->next=temp->next;
            extra=insertAtEnd(extra,temp->data);
            free(temp);
            level++;
        }
    }
    //Reverse Linklist
    Node *c=extra;
    Node *n=NULL;
    Node *p=NULL;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    while(start->next!=NULL)
    {
        start=start->next;
    }
    start->next=p;
    
}
