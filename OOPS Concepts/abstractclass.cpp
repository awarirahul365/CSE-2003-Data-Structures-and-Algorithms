#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Area{
	
	public:
		virtual int getArea()=0;
		int width;
		int height;
		void getter(int width,int height)
		{
			this->width=width;
			this->height=height;
		}
};
class Rectangle:public Area{
	public:
	int getArea()
	{
		return width*height;
	}
};
class Triangle:public Area{
	public:
	int getArea()
	{
		return 2*(width+height);
	}
};
int main()
{
	Rectangle r;
	Triangle t;
	t.getter(60,70);
	r.getter(10,20);
	r.getArea();
	cout<<r.getArea()<<" "<<t.getArea();
}
