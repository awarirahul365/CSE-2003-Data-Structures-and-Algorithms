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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*>s;
        ListNode *ta=headA;
        while(ta!=NULL)
        {
            s.insert(ta);
            ta=ta->next;
        }
        ListNode *tb=headB;
        ListNode *ans=NULL;
        while(tb!=NULL)
        {
            if(s.find(tb)!=s.end())
            {
                ans=tb;
                break;
            }
            else
            {
                tb=tb->next;
            }
        }
        return ans;
    }
};
