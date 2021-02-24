/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        Node *res;
        if(root==NULL)
        {
            res=NULL;
        }
        else
        {
            deque<Node*>dq;
            res=root;
            dq.push_back(root);
            while(!dq.empty())
            {
                int sz=dq.size();
                if(sz==1)
                {
                    Node *t=dq.front();
                    t->next=NULL;
                }
                else if(sz>1)
                {
                    for(int j=0;j<sz-1;j++)
                    {
                        Node *p=dq.front();
                        dq.pop_front();
                        Node *nxt=dq.front();
                        p->next=nxt;
                        dq.push_back(p);
                    }
                    Node *ext=dq.front();
                    ext->next=NULL;
                    dq.pop_front();
                    dq.push_back(ext);
                }
                for(int i=0;i<sz;i++)
                {
                    Node *curr=dq.front();
                    dq.pop_front();
                    if(curr->left!=NULL)
                    {
                        dq.push_back(curr->left);
                    }
                    if(curr->right!=NULL)
                    {
                        dq.push_back(curr->right);
                    }
                }
            }
        }
        return res;
    }
};
