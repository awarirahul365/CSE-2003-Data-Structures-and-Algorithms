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
    ListNode* swapNodes(ListNode* head, int k) {
        
        //for beginning element
        int countbegin=1;
        ListNode *trav1=head;
        ListNode *fixed=head;
        int copyelement;
        ListNode *copyadd=NULL;
        while(trav1!=NULL)
        {
            if(countbegin!=k)
            {
                countbegin++;
            }
            else if(countbegin==k)
            {
                copyelement=trav1->val;
                copyadd=trav1;
                break;
            }
            trav1=trav1->next;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *nxtnd=NULL;
        while(curr!=NULL)
        {
            nxtnd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxtnd;
        }
        ListNode *trav2=prev;
        int countend=1;
        int endelement;
        ListNode *endadd=NULL;
        while(trav2!=NULL)
        {
            if(countend!=k)
            {
                countend++;
            }
            else if(countend==k)
            {
                endelement=trav2->val;
                endadd=trav2;
                break;
            }
            trav2=trav2->next;
        }
        ListNode *c=prev;
        ListNode *p=NULL;
        ListNode *n=NULL;
        while(c!=NULL)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        ListNode *t=p;
        while(t!=NULL)
        {
            if(t==copyadd)
            {
                t->val=endelement;
            }
            else if(t==endadd)
            {
                t->val=copyelement;
            }
            t=t->next;
        }
        return p;
    }
};
