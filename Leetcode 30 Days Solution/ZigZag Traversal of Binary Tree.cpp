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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int> > vect;
        vector<int>vinit;
        if(root==NULL)
        {
            return vect;
        }
        else
        {
            queue<TreeNode*>q;
            q.push(root);
            int level=1;
            while(!q.empty())
            {
                int sz=q.size();
                for(int i=0;i<sz;i++)
                {
                    TreeNode *curr=q.front();
                    q.pop();
                    vinit.push_back(curr->val);
                    if(curr->left!=NULL)
                    {
                        q.push(curr->left);
                    }
                    if(curr->right!=NULL)
                    {
                        q.push(curr->right);
                    }
                }
                if(level%2==0)
                {
                    reverse(vinit.begin(),vinit.end());
                    vect.push_back(vinit);
                }
                else if(level%2!=0)
                {
                    vect.push_back(vinit);
                }
                level++;
                vinit.clear();
            }
            return vect;
        }
        
    }
};
