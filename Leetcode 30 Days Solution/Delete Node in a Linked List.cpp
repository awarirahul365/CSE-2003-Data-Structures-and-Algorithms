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
    void deleteNode(ListNode* node) {
        
        ListNode *nxtadd=node->next;
        ListNode *nxtnxtadd=nxtadd->next;
        node->val=nxtadd->val;
        delete nxtadd;
        node->next=nxtnxtadd;
    }
};
