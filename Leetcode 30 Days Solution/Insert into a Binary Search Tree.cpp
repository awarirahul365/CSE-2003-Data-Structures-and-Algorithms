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
    TreeNode* insertIntoBST(TreeNode* root, int x) {
        
        TreeNode *insnode=new TreeNode(x);
        if(root==NULL)
        {
            return insnode;
        }
        else
        {
            TreeNode *curr=root;
            TreeNode *parent=NULL;
            while(curr!=NULL)
            {
                parent=curr;
                int num=curr->val;
                if(x<num)
                {
                    curr=curr->left;
                }
                else
                {
                    curr=curr->right;
                }
            }
            if(parent->val>x)
            {
                parent->left=insnode;
            }
            else
            {
                parent->right=insnode;
            }
            return root;
        }
    }
};
