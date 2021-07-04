/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getsum(TreeNode *head)
    {
        if(head==NULL)
        {
            return 0;
        }
        else
        {
            return head->val+getsum(head->left)+getsum(head->right);
        }
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        vector<int>vect;
        unordered_map<int,int>mp;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode *head=q.front();
                q.pop();
                int outp;
                outp=getsum(head);
                mp[outp]++;
                if(head->left!=NULL)
                {
                    q.push(head->left);
                }
                if(head->right!=NULL)
                {
                    q.push(head->right);
                }
            }
        }
        int maxcount=0;
        unordered_map<int,int>::iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            maxcount=max(maxcount,itr->second);
        }
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second==maxcount)
            {
                vect.push_back(itr->first);
            }
        }
        return vect;
    }
};
