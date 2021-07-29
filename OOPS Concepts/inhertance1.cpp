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
			cout<<name<<" "<<ID<<" "<<address<<" "<<coursename;	
		}	
};
int main()
{
	Address a;
	a.addstudent("Rahul",38);
	a.addaddress("Pune");
	a.addcourse("English");
	a.display();
}
