#include<iostream>
#include<vector>
using namespace std;
int func(int m)
{
    vector<int>vect;
    int nxt;
    nxt=m/2;
    for(int i=1;i<nxt+1;i++)
    {
        if(m%i==0)
        {
            vect.push_back(i);
        }
    }
    vect.push_back(m);
    if(vect.size()==3 && vect[0]!=vect[1] && vect[1]!=vect[2] && vect[0]!=vect[2])
    {
        return 1;
    }
    else
    {
        return 0;
    }
    vect.clear();
}
int main()
{
    int t;
    cin>>t;
    int n;
    vector<int>res;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        res.push_back(func(n));
    }
    for(int j=0;j<res.size();j++)
    {
        cout<<res[j]<<endl;
    }
}
