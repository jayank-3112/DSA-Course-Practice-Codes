#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void print1ton(int);
void sum1ton(int);
void sum1toneven(int);
void sum1tonodd(int);
int main()
{
    int n,i=1;
    cout<<"\nEnter the value of n ";
    cin>>n;
    
    print1ton(n);
    sum1ton(n);
    sum1toneven(n);
    sum1tonodd(n);
    return 1;
}
void print1ton(int n)
{
    int i=1;
    cout<<"\nThe values from 1 to "<<n<<" are ";
    while(i<=n)
    {
        cout<<i<<" ";
        i=i+1;
    }
}
void sum1ton(int n)
{
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"\n\nThe sum of values from 1 to "<<n<<" is "<<sum;
    
}
void sum1toneven(int n)
{
    int sum=0;
    int i=2;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"\n\nThe sum of even values from 1 to "<<n<<" is "<<sum;
}
void sum1tonodd(int n)
{
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<"\n\nThe sum of odd values from 1 to "<<n<<" is "<<sum;
}