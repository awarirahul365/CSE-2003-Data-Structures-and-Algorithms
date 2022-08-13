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

// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code 
    int arr[5]={1,2,3,4,5};
    int *q=&arr[0];
    int (*z)[5]=&arr;
    char *t="abcdef";
    
    std::cout<<&t[0];
    

    return 0;
}
