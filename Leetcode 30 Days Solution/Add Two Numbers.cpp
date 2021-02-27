/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *addNode(ListNode *head,int p)
    {
        ListNode *putele=new ListNode(p);
        if(head==NULL)
        {
            return putele;
        }
        else
        {
            ListNode *curr=head;
            while(curr->next!=NULL)
            {
                curr=curr->next;
            }
            curr->next=putele;
            return head;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *t1=l1;
        ListNode *t2=l2;
        int sum=0;
        int carry=0;
        ListNode *finalout=NULL;
        while(t1!=NULL && t2!=NULL)
        {
            int num1=t1->val;
            int num2=t2->val;
            sum=num1+num2+carry;
            int m=sum%10;
            carry=sum/10;
            finalout=addNode(finalout,m);
            sum=0;
            t1=t1->next;
            t2=t2->next;
        }
        if(t1!=NULL && t2==NULL)
        {
            while(t1!=NULL)
            {
                sum=t1->val+carry;
                int k=sum%10;
                carry=sum/10;
                finalout=addNode(finalout,k);
                sum=0;
                t1=t1->next;
            }
        }
        else if(t2!=NULL && t1==NULL)
        {
            while(t2!=NULL)
            {
                sum=t2->val+carry;
                int j=sum%10;
                carry=sum/10;
                finalout=addNode(finalout,j);
                sum=0;
                t2=t2->next;
            }
        }
        if(carry==1)
        {
            finalout=addNode(finalout,carry);
        }
        return finalout;
    }
};
