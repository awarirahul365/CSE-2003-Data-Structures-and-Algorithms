#include <iostream>
using namespace std;
int func(string str)
{
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='#')
        {
            count++;
        }
    }
    return count;
}
int main() {
	
	int t;
	cin>>t;
	int outp;
	for(int i=0;i<t;i++)
	{
	    string str;
	    cin>>str;
	    outp=func(str);
	    cout<<outp<<endl;
	}
}
