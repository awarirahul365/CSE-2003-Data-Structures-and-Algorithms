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
    bool isPalindrome(ListNode* head) {
        
        stack<int>s;
        ListNode *t=head;
        while(t!=NULL)
        {
            s.push(t->val);
            t=t->next;
        }
        ListNode *curr=head;
        int flag=1;
        while(!s.empty())
        {
            int stcnum=s.top();
            s.pop();
            int listnum=curr->val;
            if(listnum!=stcnum)
            {
                flag=0;
                break;
            }
            curr=curr->next;
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
