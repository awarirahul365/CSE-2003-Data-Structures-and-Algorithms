#include<iostream>
using namespace std;
void func(int arr[],int n)
{
	int maxone=0;
	if(n>1)
    {
        int temp[10000];
	    int d;
	    for(int i=0;i<n-1;i++)
	    {
		    if(arr[i]<arr[i+1])
		    {
			    temp[d]=1;
			    d++;
	    	}
	    	else if(arr[i]>=arr[i+1])
		    {
			    temp[d]=0;
			    d++;
		    }
	    }
    
        
	    int cur_con=0;
	    for(int i=0;i<d;i++)
	    {
		    if(temp[i]==1)
		    {
			    cur_con++;
			    maxone=max(maxone,cur_con);	
	    	}
	    	else if(temp[i]==0)
		    {
			    cur_con=0;
		    }
	    }
	    cout<<maxone;
    }
    else if(n==1)
    {
        cout<<0;
    }
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	func(arr,n);
	
}
