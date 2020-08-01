int calculatesum(int mat[],int p)
{
    int s=0;
    for(int i=0;i<p;i++)
    {
        s=s+mat[i];
    }
    return s;
}
int implementleaf(Node *head,int arr[],int index,vector<int> &vect)
{
    if(head==NULL)
    {
        return 0;
    }
    arr[index]=head->data;
    index++;
    if(head->left==NULL && head->right==NULL)
    {
        int out;
        out=calculatesum(arr,index);
        vect.push_back(out);
    }
    else
    {
        implementleaf(head->left,arr,index,vect);
        implementleaf(head->right,arr,index,vect);
    }
}
bool hasPathSum(Node *root, int sum) {
    
    if(root==NULL)
    {
        return true;
    }
    else
    {
        int arr[1000];
        int flag=0;
        vector<int>vect;
        implementleaf(root,arr,0,vect);
        for(int i=0;i<vect.size();i++)
        {
            if(sum==vect[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}
