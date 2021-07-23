/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *lca(TreeNode *root,int n1,int n2)
    {
        TreeNode *ans;
        if(root==NULL)
        {
            return NULL;
        }
        if(root->val==n1 || root->val==n2)
        {
            return root;
        }
        TreeNode *lcleft=lca(root->left,n1,n2);
        TreeNode *lcright=lca(root->right,n1,n2);
        if(lcleft!=NULL && lcright!=NULL)
        {
            return root;
        }
        if(!lcleft && lcright)
        {
            ans=lcright;
        }
        if(!lcright && lcleft)
        {
            ans=lcleft;
        }
        return ans;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        int num1=p->val;
        int num2=q->val;
        TreeNode *z=lca(root,num1,num2);
        return z;
    }
};
