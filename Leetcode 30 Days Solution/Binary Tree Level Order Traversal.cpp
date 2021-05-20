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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> vect;
        vector<int>temp;
        if(root==NULL)
        {
            return vect;
        }
        else
        {
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty())
            {
                int sz=q.size();
                for(int i=0;i<sz;i++)
                {
                    TreeNode *t=q.front();
                    q.pop();
                    temp.push_back(t->val);
                    if(t->left!=NULL)
                    {
                        q.push(t->left);
                    }
                    if(t->right!=NULL)
                    {
                        q.push(t->right);
                    }
                }
                vect.push_back(temp);
                temp.clear();
            }
            return vect;
        }
        
    }
};
