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
    bool isIdentical(TreeNode *t,TreeNode *subRoot)
    {
        if(t==NULL && subRoot==NULL)
        {
            return true;
        }
        if(t!=NULL && subRoot!=NULL)
        {
            if(t->val==subRoot->val)
            {
                return isIdentical(t->left,subRoot->left) && isIdentical(t->right,subRoot->right);
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        queue<TreeNode*>q;
        q.push(root);
        bool flag=false;
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode *t=q.front();
                q.pop();
                bool outp;
                if(t->val==subRoot->val)
                {
                    outp=isIdentical(t,subRoot);
                    if(outp==true)
                    {
                        flag=true;
                    }
                }
                if(t->left!=NULL)
                {
                    q.push(t->left);
                }
                if(t->right!=NULL)
                {
                    q.push(t->right);
                }
            }
        }
        return flag;
    }
};
