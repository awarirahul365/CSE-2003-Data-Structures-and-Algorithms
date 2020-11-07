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
    int getDecimalValue(ListNode* head) {
        
        stack<int>stc;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            int num=temp->val;
            stc.push(num);
            temp=temp->next;
        }
        int binnumber=0;
        int i=0;
        while(!stc.empty())
        {
            int ele=stc.top();
            binnumber=binnumber+ele*pow(2,i);
            i++;
            stc.pop();
        }
        return binnumber;
    }
};
