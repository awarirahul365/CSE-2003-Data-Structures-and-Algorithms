#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//BABCBAB
int checkpalin(string p)
{
	string first=p;
	int low=0;
	int high=p.length()-1;
	char temp;
	while(low<=high)
	{
		temp=p[low];
		p[low]=p[high];
		p[high]=temp;
		low++;
		high--;
	}
	if(first==p)
	{
		return first.length();
	}
	else if(first!=p)
	{
		return -1;
	}
}
void subsets(string str,string curr,int index,vector<int> &vect)
{
	if(str.length()==index)
	{
		int res=checkpalin(curr);
		if(res!=-1)
		{
			vect.push_back(res);
		}
	}
	else
	{
		subsets(str,curr,index+1,vect);
		subsets(str,curr+str[index],index+1,vect);
	}
}
int main()
{
	string str="bbbab";
	string curr="";
	int index=0;
	vector<int>vect;
	subsets(str,curr,index,vect);
	int maxlen=-1;
	for(int i=0;i<vect.size();i++)
	{
		maxlen=max(vect[i],maxlen);
	}
	cout<<maxlen;
}
