#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class cubevolume{
	
	public:
		int side;
		int getside(int n)
		{
			this->side=n;// this is reference variable initialize it if instance and local variable are same
		}
		int getvolume();
};
int cubevolume::getvolume()
{
	return side*side*side;
}
int main()
{
	cubevolume c1;
	c1.getside(5);
	cout<<c1.getvolume();
}
/*
class X
{
    public:
    static void f()
    {
        // statement
    }
};

int main()
{
    X::f();   // calling member function directly with class name
}
*/
