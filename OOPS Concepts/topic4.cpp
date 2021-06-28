#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
	public:
		int len,bre;
		int getarea();
		int getperimeter();	
};
int Rectangle::getperimeter()
{
	return 2*(len+bre);
}
int Rectangle::getarea()
{
	return len*bre;
}
int main()
{
	Rectangle obj;
	int x,y;
	cout<<"Enter length"<<endl;
	cin>>x;
	cout<<"Breadth"<<endl;
	cin>>y;
	obj.len=x;
	obj.bre=y;
	cout<<obj.getperimeter()<<" "<<obj.getarea()<<endl;
	
}
