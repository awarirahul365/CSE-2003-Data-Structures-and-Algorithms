#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Test{
	public:
		int x;//private by default
};
struct Test2{
	int y;//public by default 
};
int main()
{
	Test obj;
	Test2 obj2;
	obj.x=3;
	obj2.y=4;
	cout<<obj.x<<" "<<obj2.y<<endl;
}

//In inhertance for class to class relation class is private by default.
//In struct it is not private it is public
//In struct value is allocated in stack and in class values is allocated in heap.
