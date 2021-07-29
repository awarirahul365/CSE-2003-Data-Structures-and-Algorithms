#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//different arguments
//different datatypes
class Perimeter{
	
	public:
		int length;
		int breadth;
		void getinfo(int length,int breadth);
		int sum(int length,int breadth);
		int sum(int length);
};
void Perimeter::getinfo(int length,int breadth)
{
	this->length=length;
	this->breadth=breadth;
}
int Perimeter::sum(int length)
{
	return 4*length;
}
int Perimeter::sum(int length,int breadth)
{
	return 2*(length+breadth);
}
int main()
{
	Perimeter p;
	p.getinfo(5,3);
	cout<<p.sum(5)<<endl;
	cout<<p.sum(5,3)<<endl;
}
