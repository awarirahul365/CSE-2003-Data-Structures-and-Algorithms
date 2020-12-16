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
    bool isValidBST(TreeNode* root) {
        
        vector<int>vect;
        vect.clear();
        inorder(root,vect);
        bool flag=true;
        for(int i=1;i<vect.size();i++)
        {
            if(vect[i-1]>=vect[i])
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};
