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
    int getheight(TreeNode *head)
    {
        if(head==NULL)
        {
            return 0;
        }
        int l=getheight(head->left);
        int r=getheight(head->right);
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
        {
            return true;
        }
        int leftheight=getheight(root->left);
        int rightheight=getheight(root->right);
        int diff=abs(leftheight-rightheight);
        if(diff<=1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
