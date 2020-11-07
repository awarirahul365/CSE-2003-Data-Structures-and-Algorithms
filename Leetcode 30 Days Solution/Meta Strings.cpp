#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int func(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return 0;
    }
    else
    {
        int count=0;
        vector<int>vect;
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!=str2[i])
            {
                vect.push_back(i);
            }
        }
        int flag=0;
        if(vect.size()==2)
        {
            char ch1=str1[vect[0]];
            char ch2=str1[vect[1]];
            str1[vect[0]]=ch2;
            str1[vect[1]]=ch1;
            if(str1==str2)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        else if(vect.size()!=2)
        {
            flag=0;
        }
        return flag;
    }
}
int main() {
    
    int t;
    cin>>t;
    vector<int>vectfin;
    for(int i=0;i<t;i++)
    {
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        int out;
        out=func(str1,str2);
        vectfin.push_back(out);
    }
    for(int i=0;i<vectfin.size();i++)
    {
        cout<<vectfin[i]<<endl;
    }
}
