#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//friend func
class friendfunc{
	
	int num;
	public:
	friend int getVolume(friendfunc f);
	void getside(int x);	
};
void friendfunc::getside(int x)
{
	num=x;
}
int getVolume(friendfunc f)
{
	return f.num*f.num*f.num;
}
int main()
{
	friendfunc obj;
	obj.getside(5);
	cout<<getVolume(obj);
}
