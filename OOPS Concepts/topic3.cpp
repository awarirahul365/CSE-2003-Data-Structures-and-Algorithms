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
class copycc
{
	public:
	int val1,val2;
	copycc(int num1,int num2)
	{
		val1=num1;
		val2=num2;
	}
	//copy constructor
	copycc(const copycc &m1)
	{
		val1=m1.val1;
		val2=m1.val2;	
	}	
};
int main()
{
	construct obj;
	Test obj2;
	parameterz p(10,20);
	copycc m1(90,100);
	copycc m2=m1;
	cube z(4);
	cout<<obj.a<<" "<<obj.b<<endl;
	cout<<p.x<<" "<<p.y<<endl;
	cout<<z.getvolume()<<endl;
	cout<<obj2.msg()<<endl;
	cout<<m2.val1<<" "<<m2.val2<<endl;
}

//constrcuts have same name as class itself
//placed in public section
//No return type
