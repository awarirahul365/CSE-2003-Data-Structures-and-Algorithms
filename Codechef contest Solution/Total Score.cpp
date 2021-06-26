#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int funcsum(vector<long long int>vect,string str)
{
    long long int sum=0;
    for(long long int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='1')
        {
            sum=sum+vect[i];
        }
    }
    return sum;
}
int main() {
    
    long long int t;
    cin>>t;
    long long int outp;
    for(long long int i=0;i<t;i++)
    {
        long long int n;
        long long int k;
        cin>>n>>k;
        vector<long long int>vect;
        for(int j=0;j<k;j++)
        {
            long long int p;
            cin>>p;
            vect.push_back(p);
        }
        for(long long int m=0;m<n;m++)
        {
            string str;
            cin>>str;
            outp=funcsum(vect,str);
            cout<<outp<<endl;
        }
    }
}
