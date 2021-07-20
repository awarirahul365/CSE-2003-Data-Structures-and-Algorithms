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
    void inorder(TreeNode *root,vector<int> &vect)
    {
        if(root!=NULL)
        {
            inorder(root->left,vect);
            vect.push_back(root->val);
            inorder(root->right,vect);
        }
    }
    void recoverTree(TreeNode* root) {
        
        vector<int>vect;
        vect.clear();
        inorder(root,vect);
        vector<int>temp=vect;
        sort(temp.begin(),temp.end());
        vector<int>ans;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]!=vect[i])
            {
                ans.push_back(temp[i]);
            }
        }
        int a=ans[0];
        int b=ans[1];
        TreeNode *temp1=NULL;
        TreeNode *temp2=NULL;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->val==a)
                {
                    temp1=curr;
                }
                if(curr->val==b)
                {
                    temp2=curr;
                }
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
            }
        }
        int tz=temp1->val;
        temp1->val=temp2->val;
        temp2->val=tz;
    }
};
