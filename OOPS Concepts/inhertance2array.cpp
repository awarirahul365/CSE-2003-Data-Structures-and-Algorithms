#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
	
	public:
		string name;
		int ID;
		void addstudent(string name,int ID)
		{
			this->name=name;
			this->ID=ID;
		}
};
class course{
	
	public:
		string coursename;
		void addcourse(string coursename)
		{
			this->coursename=coursename;
		}
};
class Address:public Student,public course
{
	public:
		string address;
		void addaddress(string address)
		{
			this->address=address;	
		}
		void display()
		{
			cout<<name<<" "<<ID<<" "<<address<<" "<<coursename<<endl;	
		}	
};
int main()
{
	Address a[2];
	a[0].addstudent("Rahul",38);
	a[0].addaddress("Pune");
	a[0].addcourse("English");
	a[0].display();
	a[1].addstudent("Mahesh",97);
	a[1].addcourse("Maths");
	a[1].addaddress("Mumbai");
	a[1].display();
}
