#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(vector<int> &vect)
{
    int maxheight=-1;
    int indexheight;
    for(int i=0;i<vect.size();i++)
    {
        if(vect[i]>maxheight)
        {
            maxheight=vect[i];
            indexheight=i;
        }
    }
    vector<int>ans;
    while(vect[indexheight]>0)
    {
        int minele=INT_MAX;
        for(int i=0;i<vect.size();i++)
        {
            if(vect[i]<minele && vect[i]!=0)
            {
                minele=vect[i];
            }
        }
        int count=0;
        for(int i=0;i<vect.size();i++)
        {
            if(vect[i]>0)
            {
                count++;
                vect[i]=vect[i]-minele;
            }
        }
        ans.push_back(count);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}
int main() {
	
	int t;
	cin>>t;
	vector<int>vect;
	for(int i=0;i<t;i++)
	{
	    int p;
	    cin>>p;
	    vect.push_back(p);
	}
	func(vect);
}
