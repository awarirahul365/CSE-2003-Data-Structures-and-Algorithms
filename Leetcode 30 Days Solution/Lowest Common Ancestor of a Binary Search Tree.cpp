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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* node1, TreeNode* node2) {
        
        int n1=node1->val;
        int n2=node2->val;
        vector<TreeNode*>path1;
        vector<TreeNode*>path2;
        TreeNode *curr=root;
        while(curr!=NULL)
        {
            int num=curr->val;
            if(num==n1)
            {
                path1.push_back(curr);
                break;
            }
            else if(num>n1)
            {
                path1.push_back(curr);
                curr=curr->left;
            }
            else
            {
                path1.push_back(curr);
                curr=curr->right;
            }
        }
        TreeNode *trav=root;
        while(trav!=NULL)
        {
            int z=trav->val;
            if(z==n2)
            {
                path2.push_back(trav);
                break;
            }
            else if(z>n2)
            {
                path2.push_back(trav);
                trav=trav->left;
            }
            else
            {
                path2.push_back(trav);
                trav=trav->right;
            }
        }
        TreeNode *res=NULL;
        unordered_set<TreeNode*>s;
        for(int i=0;i<path1.size();i++)
        {
            s.insert(path1[i]);
        }
        for(int i=path2.size()-1;i>=0;i--)
        {
            if(s.find(path2[i])!=s.end())
            {
                res=path2[i];
                break;
            }
        }
        return res;
    }
};
