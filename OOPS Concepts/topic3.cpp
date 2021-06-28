#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class construct
{
	public:
		int a,b;
		construct()
		{
			a=100;
			b=200;
		}
		
};
class parameterz
{
	public:
		int x,y;
		parameterz(int p1,int p2)
		{
			x=p1;
			y=p2;
		}
};
class cube
{
	public:
		int side;
		cube(int s)
		{
			side=s;
		}
		int getvolume()
		{
			return side*side*side;
		}
};
class Test
{
	public:
	msg()
	{
		cout<<"Hello World"<<endl;	
	}	
};
int main()
{
	construct obj;
	Test obj2;
	parameterz p(10,20);
	cube z(4);
	cout<<obj.a<<" "<<obj.b<<endl;
	cout<<p.x<<" "<<p.y<<endl;
	cout<<z.getvolume()<<endl;
	cout<<obj2.msg()<<endl;
}

//constrcuts have same name as class itself
//placed in public section
//No return type
