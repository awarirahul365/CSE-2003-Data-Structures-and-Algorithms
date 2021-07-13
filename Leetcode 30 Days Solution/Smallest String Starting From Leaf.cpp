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
    void roottoleaf(TreeNode *root,vector<string> &vect,int index,int arr[])
    {
        if(root==NULL)
        {
            return;
        }
        arr[index]=root->val;
        index++;
        if(root->left==NULL && root->right==NULL)
        {
            string temp="";
            for(int i=0;i<index;i++)
            {
                int num=97+arr[i];
                temp=temp+(char)num;
            }
            reverse(temp.begin(),temp.end());
            vect.push_back(temp);
        }
        else
        {
            roottoleaf(root->left,vect,index,arr);
            roottoleaf(root->right,vect,index,arr);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        
        if(root==NULL)
        {
            return "";
        }
        else
        {
            vector<string>vect;
            vect.clear();
            int index=0;
            int arr[1000];
            roottoleaf(root,vect,index,arr);
            sort(vect.begin(),vect.end());
            return vect[0];
        }
        
    }
};
