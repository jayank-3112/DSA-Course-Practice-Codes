//Implementation of prime number function 
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int);
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    if(isprime(n))
        cout<<n<<" Is a prime number";
    else
        cout<<n<<" Is not a prime number";
}
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)  //not prime
        return 0;
    }
    return 1;       //prime
}