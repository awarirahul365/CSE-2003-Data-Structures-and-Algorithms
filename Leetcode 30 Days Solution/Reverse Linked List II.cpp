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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(left==right)
        {
            return head;
        }
        else
        {
            vector<int>vect;
            ListNode *trav=head;
            ListNode *leftnode=NULL;
            ListNode *rightnode=NULL;
            int pos=1;
            while(trav!=NULL)
            {
                if(pos==left)
                {
                    vect.push_back(trav->val);
                    leftnode=trav;
                    trav=trav->next;
                    pos++;
                }
                else if(pos==right)
                {
                    vect.push_back(trav->val);
                    rightnode=trav;
                    trav=trav->next;
                    pos++;
                }
                else
                {
                    vect.push_back(trav->val);
                    trav=trav->next;
                    pos++;
                }
            }
            int lh=left-1;
            int rh=right-1;
            while(lh<rh)
            {
                int temp=vect[lh];
                vect[lh]=vect[rh];
                vect[rh]=temp;
                lh++;
                rh--;
            }
            ListNode *t=leftnode;
            for(int i=left-1;i<=right-1;i++)
            {
                t->val=vect[i];
                t=t->next;
            }
            return head;
        }
    }
};
