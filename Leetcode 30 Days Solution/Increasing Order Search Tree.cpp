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
    TreeNode* insertnode(TreeNode *head,int num)
    {
        TreeNode *t=new TreeNode(num);
        if(head==NULL)
        {
            return t;
        }
        else
        {
            TreeNode *curr=head;
            while(curr->right!=NULL)
            {
                curr=curr->right;
            }
            curr->right=t;
            return head;
        }
    }
    void inorder(TreeNode *root,vector<int> &vect)
    {
        if(root!=NULL)
        {
            inorder(root->left,vect);
            vect.push_back(root->val);
            inorder(root->right,vect);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>vect;
        inorder(root,vect);
        TreeNode *head=NULL;
        for(int i=0;i<vect.size();i++)
        {
            head=insertnode(head,vect[i]);
        }
        return head;
    }
};
