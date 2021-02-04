/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        
        unordered_set<ListNode*>s;
        ListNode *curr1=head1;
        ListNode *curr2=head2;
        int flag=0;
        while(curr1!=NULL)
        {
            s.insert(curr1);
            curr1=curr1->next;
        }
        ListNode *res=NULL;
        while(curr2!=NULL)
        {
            if(s.find(curr2)!=s.end())
            {
                res=curr2;
                flag=1;
                break;
            }
            else
            {
                curr2=curr2->next;
            }
        }
        return res;
    }
};
