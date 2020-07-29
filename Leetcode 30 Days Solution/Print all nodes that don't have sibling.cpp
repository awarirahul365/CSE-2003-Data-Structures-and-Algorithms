//User function Template for C++

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/* Prints the nodes having no siblings.  */
void printSibling(Node* root)
{
   if(root==NULL)
   {
       cout<<-1;
   }
   else
   {
       queue<Node*>q;
       q.push(root);
       int flag=0;
       vector<int>vect;
       while(!q.empty())
       {
           int sz=q.size();
           for(int i=0;i<sz;i++)
           {
               Node *curr=q.front();
               q.pop();
               if(curr->left!=NULL && curr->right==NULL)
               {
                   flag=1;
                   vect.push_back(curr->left->data);
               }
               if(curr->right!=NULL && curr->left==NULL)
               {
                   flag=1;
                   vect.push_back(curr->right->data);
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
       }
       if(flag==0)
       {
           cout<<-1;
       }
       else if(flag==1)
       {
           sort(vect.begin(),vect.end());
           for(int i=0;i<vect.size();i++)
           {
               cout<<vect[i]<<" ";
           }
       }
   }
}
