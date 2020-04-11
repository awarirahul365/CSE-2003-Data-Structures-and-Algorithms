//Brute force algorithm
#include<iostream>
#include<string>
using namespace std;
void substrt(string str1,string str2)
{
    int l1;
    int l2;
    l1=str1.length();
    l2=str2.length();
    for(int i=0;i<l1-l2;i++)
    {
        int j;
        for(j=0;j<l2;j++)
        {
            if(str1[i+j]!=str2[j])
            {
                break;
            }
        }
        if(j==l2)
        {
            cout<<"Found";
        }
    }
}
int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    substrt(str1,str2);
}
