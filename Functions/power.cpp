//Implementation of the power function (a^b)
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int power1(int,int);
int main()
{
    int a,b,ans;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    ans=power1(a,b);
    cout<<"Value of "<<a<<"^"<<b <<" = "<<ans;
    return 0;
}
int power1(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}