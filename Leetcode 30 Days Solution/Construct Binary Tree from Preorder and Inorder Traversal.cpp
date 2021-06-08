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
    int index=0;
    TreeNode *createtree(int low,int high,vector<int> &inorder,vector<int> &preorder)
    {
        if(low>high)
        {
            return NULL;
        }
        else
        {
            int num=preorder[index];
            TreeNode *root=new TreeNode(preorder[index]);
            root->left=NULL;
            root->right=NULL;
            index++;
            int pos;
            for(int i=low;i<=high;i++)
            {
                if(inorder[i]==num)
                {
                    pos=i;
                    break;
                }
            }
            root->left=createtree(low,pos-1,inorder,preorder);
            root->right=createtree(pos+1,high,inorder,preorder);
            return root;
        }
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int low=0;
        int high=inorder.size()-1;
        TreeNode *res=NULL;
        res=createtree(low,high,inorder,preorder);
        return res;
        
    }
};
