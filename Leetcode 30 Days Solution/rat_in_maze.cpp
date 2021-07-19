#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void DFS(vector<vector<int> > &vect,vector<vector<bool> > &visited,string str,int x,int y,int n)
{
	if(x==n-1 && y==n-1)
	{
		cout<<str<<endl;
		return;
	}
	if(x<0 || x>=n || y<0 || y>=n || visited[x][y]==true || vect[x][y]==0)
	{
		return;
	}
	else
	{
		visited[x][y]=true;
		DFS(vect,visited,str+"D",x+1,y,n);
		DFS(vect,visited,str+"U",x-1,y,n);
		DFS(vect,visited,str+"R",x,y+1,n);
		DFS(vect,visited,str+"L",x,y-1,n);
		visited[x][y]=false;
		return;
	}
}
void findPath(vector<vector<int> > &vect,int n)
{
	int xcod=0;
	int ycod=0;
	string str="";
	vector<vector<bool> >visited(n,vector<bool>(n,false));
	DFS(vect,visited,str,xcod,ycod,n);
}
int main()
{
	int n;
	cin>>n;
	vector<vector<int> >vect(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int p;
			cin>>p;
			vect[i][j]=p;
		}
	}
	findPath(vect,n);
}
