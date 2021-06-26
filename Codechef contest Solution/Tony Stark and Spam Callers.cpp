#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(string str)
{
    transform(str.begin(),str.end(),str.begin(),::tolower);
    unordered_set<char>s;
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(s.find(ch)==s.end())
        {
            s.insert(ch);
        }
    }
    if(s.size()%2==0)
    {
        cout<<"SPAM"<<endl;
    }
    else
    {
        cout<<"AVENGER"<<endl;
    }
}
int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        func(str);
        
    }
}
