#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex{
	public:
		int real;
		int img;
	Complex(int r=0,int c=0)
	{
		this->real=r;
		this->img=c;
	}
	Complex addnumbers(Complex x1,Complex x2)
	{
		Complex g;
		g.real=x1.real+x2.real;
		g.img=x1.img+x2.img;
		return g;
	}
	
};
int main()
{
	Complex c1(2,3);
	Complex c2(4,5);
	Complex c3;
	c3=c3.addnumbers(c1,c2);
	cout<<c3.real<<" "<<c3.img;
}
