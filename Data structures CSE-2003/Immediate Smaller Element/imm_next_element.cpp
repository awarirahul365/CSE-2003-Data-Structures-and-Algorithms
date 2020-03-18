#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    int t;
    int arr[1000];
    int res[1000];
    int p=0;
    cin>>t;
    int i,j,k;
    vector<vector<int> >imp;
    vector<int>temp;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        for(k=0;k<=n;k++)
        {
            int num1;
            int num2;
            num1=arr[k];
            num2=arr[k+1];
            if(num2<num1)
            {
                res[p]=num2;
                p++;
            }
            else if(num2>num1)
            {
                res[p]=-1;
                p++;
            }
            else if(k==(n-1))
            {
                res[k]=-1;
            }
        }
        for(int h=0;h<p-1;h++)
        {
            temp.push_back(res[h]);
        }
        imp.push_back(temp);
        temp.clear();
        for(int r=0;r<p-1;r++)
        {
            res[r]=0;
        }
        p=0;
    }
    for(int u=0;u<imp.size();u++)
    {
        for(int v=0;v<imp[u].size();v++)
        {
            cout<<imp[u][v]<<" ";
        }
        cout<<"\n";
    }
}
