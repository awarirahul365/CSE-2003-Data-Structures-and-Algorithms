#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(string str)
{
    if(str[0]=='1')
    {
        str="10"+str.substr(1,str.length()-1);
    }
    else
    {
        str="1"+str;
    }
    cout<<str<<endl;
}
int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        func(str);
    }
}
