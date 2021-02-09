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
    int checksum(int num,vector<int>& vect)
    {
        int sum=0;
        for(int j=0;j<vect.size();j++)
        {
            if(vect[j]>=num)
            {
                sum=sum+vect[j];
            }    
        }
        return sum;
    }
    void inorder(TreeNode *root,vector<int>& vect)
    {
        if(root!=NULL)
        {
            inorder(root->left,vect);
            vect.push_back(root->val);
            inorder(root->right,vect);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        
        if(root==NULL)
        {
            return NULL;
        }
        else
        {
            vector<int>vect;
            inorder(root,vect);
            queue<TreeNode*>q;
            q.push(root);
            int outp;
            while(!q.empty())
            {
                int sz=q.size();
                for(int i=0;i<sz;i++)
                {
                    TreeNode *cp=q.front();
                    q.pop();
                    outp=checksum(cp->val,vect);
                    cp->val=outp;
                    if(cp->left!=NULL)
                    {
                        q.push(cp->left);
                    }
                    if(cp->right!=NULL)
                    {
                        q.push(cp->right);
                    }
                }
            }
            return root;
        }
    }
};
