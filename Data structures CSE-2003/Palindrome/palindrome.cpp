#include<iostream>
#include<string>
using namespace std;
int main()
{
    string mystr;
    string str2="";
    cout<<"enter your name";
    getline(cin,mystr);
    for (int i=0;i<mystr.length();i++)
    {
        str2=str2+mystr[mystr.length()-i-1];
    }
    if(mystr.compare(str2)==0)
    {
        cout<<"plaindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}
