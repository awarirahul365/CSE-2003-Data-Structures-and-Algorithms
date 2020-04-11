#include<iostream>
#include<vector>
using namespace std;
void func(int arr[],int n,int sec,int res[]){
    int cur_con=1;
    int first_index;
    int last_index;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cur_con=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                break;
            }
            else
            {
                cur_con++;
            }
        }
        if(arr[i]==sec)
        {
            first_index=i;
            last_index=i+cur_con-1;
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        res[0]=first_index;
        res[1]=last_index;
    }
    else if(flag==0)
    {
        res[0]=-1;
        res[1]=-1;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    int sec;
    int res[2];
    vector<int>vect;
    vector<vector<int> >imp;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        cin>>sec;
        func(arr,n,sec,res);
        vect.push_back(res[0]);
        vect.push_back(res[1]);
        imp.push_back(vect);
        vect.clear();
    }
    for(int i=0;i<imp.size();i++)
    {
        for(int j=0;j<imp[i].size();j++)
        {
            if(imp[i][j]==-1)
            {
                cout<<-1;
                break;
            }
            else
            {
                cout<<imp[i][j]<<" ";
            }
        }
        cout<<endl;
    }


}
