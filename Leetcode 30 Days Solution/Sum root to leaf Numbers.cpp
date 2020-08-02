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
    int calculatesum(int mat[],int p)
    {
        int sum=0;
        for(int i=0;i<p;i++)
        {
            sum=sum+mat[i]*pow(10,p-i-1);
        }
        return sum;
    }
    void implementleaf(TreeNode *head,int arr[],int index,vector<int> &vect)
    {
        if(head==NULL)
        {
            return;
        }
        arr[index]=head->val;
        index++;
        if(head->left==NULL && head->right==NULL)
        {
            int out;
            out=calculatesum(arr,index);
            vect.push_back(out);
        }
        implementleaf(head->left,arr,index,vect);
        implementleaf(head->right,arr,index,vect);
    }
    int sumNumbers(TreeNode* root) {
        
        int ans;
        int arr[1000];
        vector<int>vect;
        implementleaf(root,arr,0,vect);
        int finsum=0;
        for(int i=0;i<vect.size();i++)
        {
            finsum=finsum+vect[i];
        }
        return finsum;
    }
};
