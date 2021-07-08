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
    int getmax(TreeNode *head)
    {
        if(head->right!=NULL)
        {
            return getmax(head->right);
        }
        else
        {
            return head->val;
        }
    }
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        
        if(root==NULL)
        {
            return NULL;
        }
        else if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
        }
        else if(root->val>key)
        {
            root->left=deleteNode(root->left,key);
        }
        else
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            else if(root->left==NULL && root->right!=NULL)
            {
                TreeNode *temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL && root->left!=NULL)
            {
                TreeNode *t2=root->left;
                delete root;
                return t2;
            }
            else
            {
                int leftmax=getmax(root->left);
                root->val=leftmax;
                root->left=deleteNode(root->left,leftmax);
                return root;
            }
        }
        return root;
    }
};
