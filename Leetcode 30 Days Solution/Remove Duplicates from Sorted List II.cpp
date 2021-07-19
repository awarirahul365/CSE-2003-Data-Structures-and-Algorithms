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
    ListNode *insertEnd(ListNode *h,int num)
    {
        ListNode *t=new ListNode(num);
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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
        {
            return head;
        }
        else
        {
            map<int,int>mp;
            ListNode *trav=head;
            while(trav!=NULL)
            {
                mp[trav->val]++;
                trav=trav->next;
            }
            ListNode *ans=NULL;
            map<int,int>::iterator itr;
            for(itr=mp.begin();itr!=mp.end();itr++)
            {
                if(itr->second==1)
                {
                    ans=insertEnd(ans,itr->first);
                }
            }
            return ans;
        }
        
    }
};
