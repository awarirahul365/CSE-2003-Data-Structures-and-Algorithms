#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void func(vector<string> &vect,int K)
{
    unordered_set<char>lang1;
    unordered_set<char>lang2;
    for(int i=97;i<=109;i++)
    {
        char ch1=(char)i;
        lang1.insert(ch1);
    }
    for(int i=78;i<=90;i++)
    {
        char ch2=(char)i;
        lang2.insert(ch2);
    }
    int flag=1;
    for(int j=0;j<vect.size();j++)
    {
        string word=vect[j];
        char ch=word[0];
        if(lang1.find(ch)==lang1.end() && lang2.find(ch)==lang2.end())
        {
            flag=0;
            break;
        }
        else if(lang1.find(ch)!=lang1.end())
        {
            for(int i=1;i<word.length();i++)
            {
                if(lang1.find(word[i])==lang1.end())
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        else if(lang2.find(ch)!=lang2.end())
        {
            for(int i=1;i<word.length();i++)
            {
                if(lang2.find(word[i])==lang2.end())
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int K;
	    cin>>K;
	    vector<string>vect;
	    for(int i=0;i<K;i++)
	    {
	        string str;
	        cin>>str;
	        vect.push_back(str);
	    }
	    func(vect,K);
	}
}
