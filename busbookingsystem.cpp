#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int p=0;
class bus{
	
	char passengername[10];
	char from_loc[10];
	char to_loc[10];
	char dept_time[10];
	char arrival_time[10];
	int busno;
	int fare;
	int seats[8][2]={{0}};
	public:
		void bus_addition();
		void show_details();
		void book_tickets(int,int,int);
}b[8];

void bus::bus_addition()
{
	cout<<"Enter Bus Number";
	cin>>busno;
	cout<<"Enter From Location";
	cin>>from_loc;
	cout<<"Enter destination";
	cin>>to_loc;
	cout<<"Dept time";
	cin>>dept_time;
	cout<<"Arrival Time";
	cin>>arrival_time;
	cout<<"Fixed Fare";
	cin>>fare;
	p++;
}
void bus::show_details()
{
	int check_busno;
	cout<<"Enter Bus Number";
	cin>>check_busno;
	for(int i=0;i<p;i++)
	{
		if(b[i].busno==check_busno)
		{
			cout<<"Enter Bus Number"<<b[i].busno<<endl;
			cout<<"Enter From Location"<<b[i].from_loc<<endl;
			cout<<"Enter destination"<<b[i].to_loc<<endl;
			cout<<"Dept time"<<b[i].dept_time<<endl;
			cout<<"Arrival Time"<<b[i].arrival_time<<endl;
			cout<<"Fare Details"<<b[i].fare<<endl;
			cout<<"Seat Arrangement"<<endl;
			for(int i=0;i<8;i++)
			{
				cout<<seats[i][0]<<" "<<seats[i][1]<<endl;
			}
			break;
		}
		else
		{
			cout<<"No Bus found"<<endl;
		}
	}
}
void bus::book_tickets(int x,int y,int z)
{
	for(int i=0;i<p;i++)
	{
		if(b[i].busno==z)
		{
			seats[x][y]=-1;
			cout<<"Seat arrangement"<<endl;
			for(int i=0;i<8;i++)
			{
				cout<<seats[i][0]<<" "<<seats[i][1]<<endl;
			}
		}
	}
}
int main()
{
	int choice;
	cout<<"Enter choice";
	cin>>choice;
	if(choice==1)
	{
		b[p].bus_addition();
		cout<<"Continue";
		int nt;
		cin>>nt;
		choice=nt;
	}
	if(choice==2)
	{
		b[0].show_details();
		cout<<"Continue booking";
		int t;
		cin>>t;
		choice=t;
	}
	if(choice==3)
	{
		int r,c,z;
		cout<<"Enter row and col";
		cin>>r>>c;
		cout<<"Enter Bus No book";
		cin>>z;
		b[0].book_tickets(r,c,z);
	}
}
