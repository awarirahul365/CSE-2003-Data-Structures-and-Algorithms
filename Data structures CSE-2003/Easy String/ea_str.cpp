#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter test cases ";
    cin>>t;
    vector<string>vect1;
    vector<vector<string> >imp;
    string str;
    int d=0;
    for(int i=0;i<t;i++)
    {
        cout<<"Enter character ";
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        int p=0;
        int n=str.length();
        int con=0;
        int cur_con=1;
        while(p<n)
        {
            int cur_con=1;
            for(int j=p+1;j<str.length();j++)
            {
                if(str[p]!=str[j])
                {
                    break;
                }
                else if(str[p]==str[j])
                {
                    cur_con++;
                }
            }
            if(cur_con>=1)
            {
               stringstream obj2;
               obj2<<str[p];
               string temp2;
               obj2>>temp2;
               p=p+cur_con;
               stringstream obj1;
               obj1<<cur_con;
               string temp1;
               obj1>>temp1;
               string temp3;
               temp3=temp1+temp2;
               vect1.push_back(temp3);
            }
        }
        imp.push_back(vect1);
        vect1.clear();
        str="";
    }
    for(int i=0;i<imp.size();i++)
    {
        for(int j=0;j<imp[i].size();j++)
        {
            cout<<imp[i][j]<<"";
        }
        cout<<"\n";
    }







}
