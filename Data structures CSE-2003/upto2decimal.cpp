#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double func(double m)
{
	float a=(float)m;
	cout<<fixed;
	cout<<setprecision(3);
	double t=(double)a;
	return t;
}
int main()
{
	double d=3.5;
	double outp=func(d);
	cout<<outp<<endl;
}
