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
typedef pair<int,ListNode*>np;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue <np, vector<np>, greater<np> > q;
        for(int i=0;i<lists.size();i++)
        {
            ListNode *trav=lists[i];
            while(trav!=NULL)
            {
                q.push({trav->val,trav});
                trav=trav->next;
            }
        }
        ListNode *head=NULL;
        while(!q.empty())
        {
            auto p=q.top();
            q.pop();
            ListNode *tp=p.second;
            tp->next=NULL;
            if(head==NULL)
            {
                head=tp;
            }
            else
            {
                ListNode *curr=head;
                while(curr->next!=NULL)
                {
                    curr=curr->next;
                }
                curr->next=tp;
            }
        }
        return head;
        
    }
};
