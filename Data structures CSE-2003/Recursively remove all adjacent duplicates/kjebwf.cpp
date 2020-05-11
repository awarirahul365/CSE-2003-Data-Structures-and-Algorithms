#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
string func(string str)
{
    string spare="";
    int sz=str.length();
    string sp[100];
    int d=0;
    int cur_con=1;
    int index=0;
    while(index<sz)
    {

        cur_con=1;
        for(int j=index+1;j<sz;j++)
        {
            if(str[index]!=str[j])
            {
                break;
            }
            else
            {
                cur_con++;
            }
        }
        if(cur_con==1)
        {
            spare=spare+str[index];
            index++;
        }
        else if(cur_con>1)
        {
            index=index+cur_con;
        }    
    }
    return spare;
    
}
int main()
{
    int t;
    cin>>t;
    string str;
    string obj;
    string obj1;
    string sp[100];
    int d=0;
    for(int i=0;i<t;i++)
    {
        cin>>str;
        obj=func(str);
        obj1=func(obj);
        if(obj==obj1)
        {
        	sp[i]=obj;
		}
		else
		{
			obj1=func(obj1);
			sp[i]=obj1;
		}
    }
	for(int i=0;i<t;i++)
	{
		cout<<sp[i]<<endl;
	}   
}
