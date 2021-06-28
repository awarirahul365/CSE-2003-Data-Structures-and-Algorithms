#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		int age;
	private:
		int salary;
};
int main()
{
	A obj;
	obj.age=21;
	obj.salary=300;//not allowed as private cannot be accessed
	cout<<obj.age<<" "<<obj.salary<<endl;
}
