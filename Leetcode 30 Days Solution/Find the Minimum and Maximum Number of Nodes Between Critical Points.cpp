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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int>vect;
        ListNode *t=head;
        while(t!=NULL)
        {
            vect.push_back(t->val);
            t=t->next;
        }
        vector<pair<int,int>>criticalpts;
        for(int i=1;i<vect.size()-1;i++)
        {
            int prevnum=vect[i-1];
            int nxtnum=vect[i+1];
            int currnum=vect[i];
            if((prevnum>currnum && currnum<nxtnum) || (prevnum<currnum && currnum>nxtnum))
            {
                criticalpts.push_back(make_pair(i,currnum));
            }
        }
        vector<int>ans;
        int sz=criticalpts.size();
        if(sz<2)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
            int maxdist=criticalpts[sz-1].first-criticalpts[0].first;
            int mindist=INT_MAX;
            for(int i=0;i<criticalpts.size()-1;i++)
            {
                int diff=criticalpts[i+1].first-criticalpts[i].first;
                mindist=min(mindist,diff);
            }
            ans.push_back(mindist);
            ans.push_back(maxdist);
            
        }
        return ans;
    }
};
