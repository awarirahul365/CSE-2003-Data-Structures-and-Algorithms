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
    int getheight(TreeNode *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            int ls=getheight(root->left);
            int rs=getheight(root->right);
            return 1+max(ls,rs);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        
        if(root==NULL)
        {
            return root->val;
        }
        else
        {
            int outp;
            outp=getheight(root);
            queue<TreeNode*>q;
            q.push(root);
            int level=1;
            int sum=0;
            while(!q.empty())
            {
                int sz=q.size();
                for(int i=0;i<sz;i++)
                {
                    TreeNode *curr=q.front();
                    q.pop();
                    if(level==outp)
                    {
                        sum=sum+curr->val;
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
                level++;
            }
            return sum;
        }
        
    }
};
