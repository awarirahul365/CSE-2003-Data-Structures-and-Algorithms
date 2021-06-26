#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(string str)
{
    if(str.length()<2)
    {
        cout<<"Error"<<endl;
    }
    else
    {
        string starttag=str.substr(0,2);
        if(starttag!="</")
        {
            cout<<"Error"<<endl;
        }
        else
        {
            int countchar=0;
            int flag=1;
            for(int i=2;i<str.length()-1;i++)
            {
                char ch=str[i];
                if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
                {
                    countchar++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1 && str[str.length()-1]=='>' && countchar!=0)
            {
                cout<<"Success"<<endl;
            }
            else
            {
                cout<<"Error"<<endl;
            }
        }
    }
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
