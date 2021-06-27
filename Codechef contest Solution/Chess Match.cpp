#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int timetotal=180+n;
        timetotal=2*timetotal;
        long long int timeleft=a+b;
        long long int duration=timetotal-timeleft;
        cout<<duration<<endl;
        
    }
}
