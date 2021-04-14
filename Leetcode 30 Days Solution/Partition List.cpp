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
    ListNode *insertEnd(ListNode *h,int data)
    {
        ListNode *t=new ListNode(data);
        if(h==NULL)
        {
            return t;
        }
        else
        {
            ListNode *curr=h;
            while(curr->next!=NULL)
            {
                curr=curr->next;
            }
            curr->next=t;
            return h;
        }
    }
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *trav=head;
        ListNode *nt=head;
        ListNode *newhead=NULL;
        while(trav!=NULL)
        {
            int num=trav->val;
            if(num<x)
            {
                newhead=insertEnd(newhead,num);
            }
            trav=trav->next;
        }
        while(nt!=NULL)
        {
            if(nt->val>=x)
            {
                newhead=insertEnd(newhead,nt->val);
            }
            nt=nt->next;
        }
        return newhead;
    }
};
