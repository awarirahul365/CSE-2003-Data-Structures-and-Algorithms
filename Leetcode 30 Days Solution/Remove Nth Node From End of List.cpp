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
    ListNode *reverse(ListNode *h)
    {
        ListNode *prev=NULL;
        ListNode *curr=h;
        ListNode *nxt=NULL;
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *revhead=reverse(head);
        int count=1;
        ListNode *trav=revhead;
        ListNode *finalout=NULL;
        if(n==1)
        {
            ListNode *temp=trav->next;
            delete trav;
            finalout=reverse(temp);
        }
        else
        {
            while(trav!=NULL)
            {
                if(count==n-1)
                {
                    ListNode *t=trav->next;
                    ListNode *seccon=trav->next->next;
                    trav->next=seccon;
                    delete t;
                    break;
                }
                count++;
                trav=trav->next;
            }
            finalout=reverse(revhead);
        }
        return finalout;
    }
};
