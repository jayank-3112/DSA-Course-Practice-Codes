//Implementation of the ncr function (ncr-perutation)
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int ncr(int,int);
int factorial(int);
int main()
{
    int n,r,ans;
    cout<<"Enter the value of N and R";
    cin>>n>>r;
    ans=ncr(n,r);
    cout<<"NCR of "<<n<<"and"<<r<<"is = "<<ans;
    return 0;
}
int ncr(int n,int r)
{   int a,b;
    a=factorial(n);                     //numerator
    b=factorial(r)*factorial(n-r);      //denominator
    return (a/b);
}
int factorial(int k)
{
    int fact=1;
    for(int i=1;i<=k;i++)
        fact=fact*i;
    return fact;
}