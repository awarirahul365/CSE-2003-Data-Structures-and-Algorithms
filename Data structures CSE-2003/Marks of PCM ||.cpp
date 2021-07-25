// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

struct Student{
    
    int physics;
    int chemistry;
    int maths;
};
bool comp(Student &x,Student &y)
{
    if(x.physics==y.physics && x.chemistry==y.chemistry)
    {
        return x.maths<y.maths;
    }
    else if(x.physics==y.physics)
    {
        return x.chemistry>y.chemistry;
    }
    else
    {
        return x.physics<y.physics;
    }
}
class Solution{
    public:
    void customSort (int phy[], int chem[], int math[], int N)
    {
        Student arr[N];
        for(int i=0;i<N;i++)
        {
            arr[i].physics=phy[i];
            arr[i].chemistry=chem[i];
            arr[i].maths=math[i];
        }
        sort(arr,arr+N,comp);
        for(int m=0;m<N;m++)
        {
            phy[m]=arr[m].physics;
            chem[m]=arr[m].chemistry;
            math[m]=arr[m].maths;
        }
    } 
    
};

// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
