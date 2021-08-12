#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vect;
    for(int i=0;i<n;i++)
    {
        int z;
        cin>>z;
        vect.push_back(z);
    }
    int sum=0;
    sort(vect.begin(),vect.end());
    if(vect.size()==2)
    {
        if(vect[0]==vect[1])
        {
            sum=vect[0]+vect[1]+1;
        }
    }
    else
    {
        unordered_set<int>s;
        s.insert(vect[0]);
        int curr_sum=vect[0];
        for(int i=1;i<vect.size();i++)
        {
            if(s.find(vect[i])!=s.end())
            {
                int num=vect[i]+1;
                while(s.find(num)!=s.end())
                {
                    num++;
                }
                curr_sum=curr_sum+num;
                s.insert(num);
            }
            else
            {
                curr_sum=curr_sum+vect[i];
                s.insert(vect[i]);
            }
        }
        cout<<curr_sum;
    }
}
