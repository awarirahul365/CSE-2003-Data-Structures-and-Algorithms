#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x;
	    cin>>a>>b>>x;
	    int diff=b-a;
	    int req=diff/x;
	    cout<<req<<endl;
	}
}
