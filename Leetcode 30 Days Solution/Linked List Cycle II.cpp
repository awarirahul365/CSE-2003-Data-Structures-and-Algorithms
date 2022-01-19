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
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL)
        {
            return NULL;
        }
        else if(head->next==NULL)
        {
            return NULL;
        }
        else
        {
            ListNode *fastNode=head;
        ListNode *slowNode=head;
        int count=0;
        bool looppres=false;
        while(fastNode!=NULL && fastNode->next!=NULL)
        {
            if(fastNode==slowNode && count!=0)
            {
                looppres=true;
                break;
            }
            else
            {
                fastNode=fastNode->next->next;
                slowNode=slowNode->next;
                count++;
            }
        }
        if(looppres==false)
        {
            return NULL;
        }
        else
        {
            ListNode *currfast=fastNode;
            ListNode *currslow=head;
            ListNode *ans=NULL;
            while(currfast!=currslow)
            {
                currfast=currfast->next;
                currslow=currslow->next;
            }
            ans=currfast;
            return ans;
        }
        }
    }
};
