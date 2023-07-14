//Program to reverse an integer
#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
#include<math.h>
#include <iostream>
void reverse();
int main()
{
    reverse();
}
void reverse()
{
    int digit,k,n,ans=0;
    cout<<"Enter the number ";
    cin>>n;
    k=n;
    while(n!=0)
    {
        digit=n%10;
        if((ans>INT32_MAX/10)||(ans<INT32_MIN/10))
            ans=0;
        ans=ans*10+digit;
        n=n/10;
    }
    cout<<"The reverse of number "<<k<<" is "<<ans;
}