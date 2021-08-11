#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex{
	
	private:
		int real;
		int img;
	public:
		Complex(int r=0,int c=0)
		{
			real=r;
			img=c;
		}
		void print()
		{
			cout<<real<<" "<<img;
		}
		Complex operator +(Complex c)
		{
			Complex t;
			t.real=real+c.real;
			t.img=img+c.img;
			return t;
		}
	
};
int main()
{
	Complex c1(2,3);
	Complex c2(4,5);//parametrized called
	Complex c3;//default constructor called
	c3=c1+c2;//c3=c1.add(c2);
	c3.print();
}
