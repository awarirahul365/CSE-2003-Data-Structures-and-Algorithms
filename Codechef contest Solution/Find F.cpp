#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int func(long long int n)
{
    long long int prod=1;
    for(long long int i=0;i<n;i++)
    {
        prod=prod*(n-i);
    }
    return prod;
}
int main() {
	
	long long int t;
	cin>>t;
	long long int outp;
	for(long long int i=0;i<t;i++)
	{
	    long long int n;
	    cin>>n;
	    outp=func(n);
	    cout<<outp<<endl;
	}
	return 0;
}
