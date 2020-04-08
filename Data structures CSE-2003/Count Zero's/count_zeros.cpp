#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int> &vect)
{
    int low;
    int high;
    int mid;
    high=vect.size()-1;
    low=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(vect[mid]==1 && vect[mid-1]!=1)
        {
            return mid;
        }
        else
        {
            if(vect[mid-1]==1)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    mid=0;
}
int main()
{
    int t;
    cout<<"Enter test ";
    cin>>t;
    int n;
    vector<int>vect;
    int ans[100];
    for(int j=0;j<t;j++)
    {
        cout<<"Enter size ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            vect.push_back(k);
        }
        sort(vect.begin(),vect.end());
        ans[j]=removeDuplicate(vect);
        vect.clear();
    }
    for(int i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;
    }

}
