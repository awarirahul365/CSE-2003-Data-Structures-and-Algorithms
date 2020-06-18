#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node *insertAtBegining(Node *head, int newData) {
    Node *temp=new Node(newData);
    temp->next=head;
    return temp;
   
}
void printlist(Node *curr)
{
	while(curr!=NULL)
	{
		cout<<"Current list"<<curr->data<<"\n";
		curr=curr->next;
	}
}
void findmiddle(Node *head)
{
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<"Middle Elemnt"<<slow->data<<endl;
}
void nfromlinklist(Node *head,int nth)
{
	Node *res=head;
	int count=0;
	while(res!=NULL)
	{
		count=count+1;
		res=res->next;
	}
	if(nth>count)
	{
		cout<<-1<<endl;
	}
	else
	{
		Node *trav=head;
		int pres=0;
		for(int i=1;i<(count-nth+1);i++)
		{
			trav=trav->next;
		}
		cout<<"first method"<<trav->data<<endl;
	}
}
void nfromlist(Node *head,int nth)
{
	Node *first=head;
	for(int j=1;j<nth;j++)
	{
		first=first->next;
	}
	Node *second=head;
	while(first->next!=NULL)
	{
		first=first->next;
		second=second->next;
	}
	cout<<"Second method"<<second->data<<endl;
}
int main()
{
	Node *head=NULL;
	int n;
	cout<<"Enter length";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		head=insertAtBegining(head,num);
	}
	int nth;
	cout<<"Enter nth node";
	cin>>nth;
	printlist(head);
	findmiddle(head);
	nfromlinklist(head,nth);
	nfromlist(head,nth);
}
