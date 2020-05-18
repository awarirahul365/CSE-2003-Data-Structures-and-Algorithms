#include<iostream>
#include<string>
using namespace std;
int fact(int ap)
{
	if(ap==0)
	{
		return 1;
	}
	return ap*fact(ap-1);
}
int main()
{
	string str;
	cin>>str;
	int res=0;
	int out;
	int sum=0;
	for(int i=0;i<str.length();i++)
	{
		char p=str[i];
		for(int j=i+1;j<str.length();j++)
		{
			char sp=str[j];
			if(sp<=p)
			{
				res=res+1;	
			}
		}
		int ap;
		ap=str.length()-i-1;
		out=fact(ap);
		sum=sum+out*res;
		res=0;
	}
	cout<<sum+1;
}
