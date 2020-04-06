#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[10000];
    vector<int>vect;
    vector<int>out;
    int n;
    int con=0;
    int cur_con=1;
    int res;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int m;
            cin>>m;
            vect.push_back(m);
        }
        int p=0;
        while(p<n)
        {
            cur_con=1;
            for(int k=p+1;k<n;k++)
            {
                if(vect[p]!=vect[k])
                {
                    break;
                }
                else if(vect[p]==vect[k])
                {
                    cur_con++;
                }
            }
            if(cur_con>con)
            {
                con=cur_con;
            }
            if(cur_con==1)
            {
                res=vect[p];
                p=p+cur_con;
            }
            else if(cur_con!=1)
            {
                p=p+cur_con;
            }
        }
        out.push_back(res);
        con=0;
        cur_con=1;
        res=0;
        vect.clear();
        p=0;
    }
    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<endl;
    }
}
