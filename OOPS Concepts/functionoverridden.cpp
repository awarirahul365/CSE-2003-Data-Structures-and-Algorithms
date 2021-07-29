#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout << "Base class\n";
    }
};

class Derived:public Base
{
    public:
    void show()
    {
        cout << "Derived Class\n";
    }
};

int main()
{
    Base* b;       //Base class pointer
    Derived d;     //Derived class object
    b = &d;
    b->show();     //Early Binding Occurs
    Base b1;
    Derived d1;
    b1.show();
    d1.show();
}

